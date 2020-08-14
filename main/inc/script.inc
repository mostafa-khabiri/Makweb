<?php
/**
 * Created by PhpStorm.
 * User: MOSTAFA
 * Date: 5/13/2020
 * Time: 12:52 AM
 */
?>

<script src="newTemplate/main/js/jquery-3.4.1.min.js"></script>
<script src="newTemplate/main//js/jquery.touchSwipe.min.js"></script>
<script src="newTemplate/main/js/slick.min.js"></script>
<script src="newTemplate/main/js/tether.min.js"></script>
<script src="newTemplate/main/js/bootstrap.min.js"></script>
<script src="newTemplate/main/js/jquery.steps.min.js"></script>
<script src="newTemplate/main/js/fontawesome.min.js"></script>
<script src="newTemplate/main/js/jquery.dataTables.min.js"></script>
<script src="newTemplate/main/js/macweb.js"></script>

<script>
    function menu() {
        var $size = 150, num = 0;
        $("#extra-menu").hide();
        $('ul#main-menu li').each(function () {
            $size += $(this).outerWidth();
            if ($("#top-menu").width() <= $size) {
                if (!($(this).is(':first-child') || $(this).is(':last-child'))) {
                    $(this).find('a').attr("class", "dropdown-item").appendTo("#sub-menu");
                }
            } else {
                if ($(this).find('a').length === 0) {
                    $('#sub-menu a:first').attr('class', 'nav-link');
                    $('#sub-menu a:first').appendTo($(this));
                }
            }
            num += 1;
        });
        if ($('#sub-menu').find('a').length > 0) {
            $("#extra-menu").show();
        }
    }

    $(document).ready(function () {
        menu();
    });

    $(window).resize(function () {
        menu();
    });

    function search($search_word) {
        $.ajax({
            type: 'POST',
            url: '',
            data: "search_word=" + $search_word,
            success: function (data) {
                if (data.length > 0) {
                    document.getElementById('btnSearch').setAttribute('aria-expanded', 'true');
                    $("form").addClass('show');
                    $("#searchUL").html(data);
                    $("#searchULMobile").html(data);
                } else {
                    document.getElementById('btnSearch').setAttribute('aria-expanded', 'false');
                    $("form").removeClass('show');
                    $("#searchUL").html('');
                    $("#searchULMobile").html('');
                }
            }
        });
    }

    let prev = document.getElementById('carousel-control-prev');
    let next = document.getElementById('carousel-control-next');
    if (document.getElementById('carouselExampleIndicators') !== null) {
        prev.href = '#carouselExampleIndicators';
        next.href = '#carouselExampleIndicators';
    }

    $(".carousel").swipe({
        swipe: function (event, direction, distance, duration, fingerCount, fingerData) {
            if (direction == 'left') $(this).carousel('next');
            if (direction == 'right') $(this).carousel('prev');
        },
        allowPageScroll: "vertical"
    });

    $(".allownumericwithoutdecimal").on("keypress keyup blur", function (event) {
        $(this).val($(this).val().replace(/[^\d].+/, ""));
        if ((event.which < 48 || event.which > 57)) {
            event.preventDefault();
        }
    });

    $('[href^="#navbarText"]').on('click', function () {
        $('#navbarText').toggleClass('show');
    });

    $('.multiple-items').slick({
        initialSlide: 3,
        dots: true,
        infinite: true,
        speed: 300,
        slidesToShow: 3,
        slidesToScroll: 3,
        arrows: false,
        autoplay: true,
        autoplaySpeed: 5000,
        useTransform: false,
        responsive: [
            {
                breakpoint: 1200,
                settings: {
                    slidesToShow: 2,
                    slidesToScroll: 2
                }
            },
            {
                breakpoint: 992,
                settings: {
                    initialSlide: 4,
                    slidesToShow: 2,
                    slidesToScroll: 2
                }
            },
            {
                breakpoint: 768,
                settings: {
                    initialSlide: 4,
                    slidesToShow: 1,
                    slidesToScroll: 1
                }
            }
        ]
    });

    $(".item-members").slick({
        dots: false,
        infinite: true,
        speed: 300,
        slidesToShow: 6,
        slidesToScroll: 1,
        rtl: true,
        arrows: true,
        autoplay: true,
        autoplaySpeed: 2000,
        useTransform: false,
        responsive: [
            {
                breakpoint: 1199,
                settings: {
                    slidesToShow: 5,
                    slidesToScroll: 1,
                    arrows: true
                }
            },
            {
                breakpoint: 992,
                settings: {
                    slidesToShow: 4,
                    slidesToScroll: 1,
                    arrows: true,
                    cssEase: 'linear',
                }
            },
            {
                breakpoint: 768,
                settings: {
                    slidesToShow: 3,
                    slidesToScroll: 1,
                    arrows: true,
                    cssEase: 'linear',
                }

            },
            {
                breakpoint: 590,
                settings: {
                    slidesToShow: 2,
                    slidesToScroll: 1,
                    arrows: true,
                    cssEase: 'linear',
                }

            },
        ]
    });

    $('.partner').not('.slick-initialized').slick({
        dots: false,
        infinite: true,
        speed: 300,
        slidesToShow: 7,
        slidesToScroll: 7,
        arrows: false,
        autoplay: true,
        autoplaySpeed: 2000,
        useTransform: false,
        responsive: [
            {
                breakpoint: 1024,
                settings: {
                    slidesToShow: 7,
                    slidesToScroll: 7,
                    infinite: true,
                    arrows: false
                }
            },
            {
                breakpoint: 992,
                settings: {
                    slidesToShow: 5,
                    slidesToScroll: 1,
                    arrows: false,
                    cssEase: 'linear',
                }
            },
            {
                breakpoint: 768,
                settings: {
                    slidesToShow: 3,
                    slidesToScroll: 1,
                    arrows: false,
                    cssEase: 'linear',
                }
            }
        ]
    });

    $("#jobs .btn-more").on("click", function (e) {
        e.preventDefault();
        $("#jobs").toggleClass("show-more", "");
        maxHeight = 0;
        text = "مشاهده همه";
        if ($("#jobs").hasClass("show-more")) {
            maxHeight = $("#jobs .list").outerHeight();
            text = "مخفی کردن";
        }
        $("#jobs .btn-more").text(text);
        $("#jobs .list.more").css("height", maxHeight);
    });

    $(document).ready(function () {
        $(".members").mouseenter(function () {
            $(this).find($(".member-picture")).fadeOut(500);
            $(this).find($(".member-property")).fadeIn(500);
        });

        $(".members").mouseleave(function () {
            $(this).find($(".member-picture")).fadeIn(500);
            $(this).find($(".member-property")).fadeOut(500);
        });
    });

    $(document).ready(function () {
        var heightkeyup = 474 + "px";
        $('.searchtxt').on('keydown keyup change keypress', function () {
            if ($('.searchtxt').val().length == 0) {
                $(".tables").removeClass("moretable");
                $(".tables").css("height", heightkeyup);
                $(".table-totalshow").text("نمایش همه");
            }
            $(".tables").css("height", $(".tab-height").height());
        });
        $(".table-totalshow").click(function () {
            var height = 474 + "px";
            $(".tables").toggleClass("moretable");
            $(".table-totalshow").text("نمایش همه");
            if ($(".tables").hasClass("moretable")) {
                var height = $(".tab-height").height();
                $(".table-totalshow").text("مخفی کردن");
            }
            if ($(".tab-height").height() > 474) {
                $(".tables").css("height", height);
            }
        });
    });

    // When the user clicks on the button, scroll to the top of the document
    function topFunction() {
        $('html, body').animate({scrollTop: 0}, 'slow');
    }

    $(document).ready(function () {
        $(".group-slider-hover").mouseenter(function () {
            $(this).find($("#group-slider .carousel-control-prev,#group-slider .carousel-control-next")).css({"opacity": "1"});
        });
        $(".group-slider-hover").mouseleave(function () {
            $(this).find($("#group-slider .carousel-control-prev,#group-slider .carousel-control-next")).css({"opacity": "0"});
        });

        $(".system-slider-hover1").mouseenter(function () {
            $(this).find($("#system-slider .carousel-control-prev,#system-slider .carousel-control-next")).css({"opacity": "1"});
        });
        $(".system-slider-hover1").mouseleave(function () {
            $(this).find($("#system-slider .carousel-control-prev,#system-slider .carousel-control-next")).css({"opacity": "0"});
        });
        $(".system-slider-hover2").mouseenter(function () {
            $(this).find($("#system-slider .carousel-control-prev,#system-slider .carousel-control-next")).css({"opacity": "1"});
        });
        $(".system-slider-hover2").mouseleave(function () {
            $(this).find($("#system-slider .carousel-control-prev,#system-slider .carousel-control-next")).css({"opacity": "0"});
        });
    });

    $(document).ready(function () {
        $(':input:visible').focusin(function () {
            $(this).addClass("inputsimple-active");
        });
        $(':input:visible').focusout(function () {
            $(this).removeClass("inputsimple-active");
        });
        $('input[type="submit"]').focusin(function () {
            $(this).removeClass("inputsimple-active");
        });
    });

    $(document).ready(function () {
        $(':input[required]:visible').focusin(function () {
            $(this).toggleClass("inputrequire-active");
        });
        $(':input[required]').focusout(function () {
            $(this).removeClass("inputrequire-active");
        });
    });

    $(document).ready(function () {
        $('select[required]:visible').focusin(function () {
            $(this).toggleClass("selectrequire-active");
        });
        $('select[required]').focusout(function () {
            $(this).removeClass("selectrequire-active");
        });
    });

</script>

<script src="template/main/js/modernizr.js"></script>
<script type="text/javascript" src="js/tinymce/jquery.tinymce.min.js"></script>
<script type="text/javascript" src="js/tinymce/tinymce.min.js"></script>


<!-- include summernote css/js-->
<link href="template/main/css/summernote.css" rel="stylesheet">
<script src="template/main/js/summernote.js"></script>

<script src="template/main/js/form-wizard.js"></script>
<script src="template/main/js/confirm-bootstrap.js"></script>

<script src="template/main/js/jquery.newsTicker.min.js"></script>

<!-- BootStrap Select -->
<script type="text/javascript" src="template/main/js/bootstrap-select.js"></script>

<!-- datatable
<script type="text/javascript" src="template/main/js/datatable/jquery.dataTables.js"></script>
<script type="text/javascript" src="template/main/js/datatable/dataTables.bootstrap.min.js"></script>
 -->

<!--  FileInput  -->
<script src="template/main/js/plugins/sortable.js" type="text/javascript"></script>
<script src="template/main/js/fileinput.js" type="text/javascript"></script>
<script src="template/main/js/locales/fa.js" type="text/javascript"></script>
<script src="template/main/themes/fas/theme.js" type="text/javascript"></script>
<script src="template/main/themes/explorer-fas/theme.js" type="text/javascript"></script>
<script src="template/main/jasny/js/jasny-bootstrap.min.js"></script> <!-- file uplload : -->
<script type="text/javascript" src="template/main/js/jquery.nivo.slider.pack.js"></script>

<!--Form Wizard-->
<script src="template/main/js/formwizard/wizard.js" type="text/javascript"></script>

<!--DataTimePicker-->
<script src="template/main/js/jalaali.js" type="text/javascript"></script>
<script src="template/main/js/moment.js" type="text/javascript"></script>
<script src="template/main/js/moment-jalaali.js" type="text/javascript"></script>
<script src="template/main/js/bootstrap-persiandatetimepicker.js" type="text/javascript"></script>

<!-- Select Inputs -->
<script src="template/main/js/bootstrap-tagsinput.js" type="text/javascript"></script>

<!-- Form Wizard -->
<script src="template/main/js/formToWizard.js" type="text/javascript"></script>

<!-- Editor -->
<script type="text/javascript" src="template/main/editor/js/froala_editor.min.js"></script>
<script type="text/javascript" src="template/main/editor/js/plugins/align.min.js"></script>
<script type="text/javascript" src="template/main/editor/js/plugins/char_counter.min.js"></script>
<script type="text/javascript" src="template/main/editor/js/plugins/code_beautifier.min.js"></script>
<script type="text/javascript" src="template/main/editor/js/plugins/code_view.min.js"></script>
<script type="text/javascript" src="template/main/editor/js/plugins/colors.min.js"></script>
<script type="text/javascript" src="template/main/editor/js/plugins/draggable.min.js"></script>
<script type="text/javascript" src="template/main/editor/js/plugins/emoticons.min.js"></script>
<script type="text/javascript" src="template/main/editor/js/plugins/entities.min.js"></script>
<script type="text/javascript" src="template/main/editor/js/plugins/file.min.js"></script>
<script type="text/javascript" src="template/main/editor/js/plugins/font_family.min.js"></script>
<script type="text/javascript" src="template/main/editor/js/plugins/font_size.min.js"></script>
<script type="text/javascript" src="template/main/editor/js/plugins/forms.min.js"></script>
<script type="text/javascript" src="template/main/editor/js/plugins/fullscreen.min.js"></script>
<script type="text/javascript" src="template/main/editor/js/plugins/help.min.js"></script>
<script type="text/javascript" src="template/main/editor/js/plugins/image.min.js"></script>
<script type="text/javascript" src="template/main/editor/js/plugins/image_manager.min.js"></script>
<script type="text/javascript" src="template/main/editor/js/plugins/inline_style.min.js"></script>
<script type="text/javascript" src="template/main/editor/js/plugins/line_breaker.min.js"></script>
<script type="text/javascript" src="template/main/editor/js/plugins/link.min.js"></script>
<script type="text/javascript" src="template/main/editor/js/plugins/lists.min.js"></script>
<script type="text/javascript" src="template/main/editor/js/plugins/paragraph_format.min.js"></script>
<script type="text/javascript" src="template/main/editor/js/plugins/paragraph_style.min.js"></script>
<script type="text/javascript" src="template/main/editor/js/plugins/quick_insert.min.js"></script>
<script type="text/javascript" src="template/main/editor/js/plugins/quote.min.js"></script>
<script type="text/javascript" src="template/main/editor/js/plugins/save.min.js"></script>
<script type="text/javascript" src="template/main/editor/js/plugins/table.min.js"></script>
<script type="text/javascript" src="template/main/editor/js/plugins/url.min.js"></script>
<script type="text/javascript" src="template/main/editor/js/plugins/video.min.js"></script>
<script type="text/javascript" src="template/main/editor/js/languages/fa.js"></script>

<!-- map -->
<script type="text/javascript" src="template/main/js/leaflet.js"></script>
<script type="text/javascript" src="template/main/js/leaflet-search.js"></script>

<!-- star -->
<script type="text/javascript" src="template/main/js/star.js"></script>

<!-- validator -->
<script type="text/javascript" src="template/main/js/validator.js"></script>

<!-- confirmation -->
<script type="text/javascript" src="template/main/js/bootstrap-confirmation.min.js"></script>

<!-- PostForm -->
<script type="text/javascript" src="template/main/js/postforms.js"></script>

<input name="image" type="file" id="upload" class="hidden" onchange="">

<script type="text/javascript">
    //=============>Loading<===============//
    $(window).load(function () {
        $(".loader").fadeOut("slow");
    });

    //===========>name bottom <============//
    $('.name').find('h4').each(function () {
        var id = '#' + $(this).attr('id');
        if (id.indexOf("nametop") !== 0 && $(id).height() > 20) {
            $(id).css("min-height", 70 - $(id).height() + 'px');
        }
    });
    //===========>name bottom <============//

    $(window).load(function () {
        $('#slider').nivoSlider();
    });
</script>
<script>
    if ($("#nt-example1").length) {
        var nt_example1 = $('#nt-example1').newsTicker({
            row_height: 46,
            max_rows: 1,
            duration: 4000,
            prevButton: $('#nt-example1-prev'),
            nextButton: $('#nt-example1-next')
        });
    }

    $(function () {
        if ($("#rayaneditor").length) {
            $('#rayaneditor').froalaEditor({
                language: 'fa',
                height: '400px',
                imageDefaultDisplay: 'inline',
                fileUploadURL: '/upload_file.php',
                imageManagerLoadURL: '<?= BASE_URL . "filemanger?List=images"; ?>',
                imageUploadURL: '<?= BASE_URL . "filemanger"; ?>',
                // Set the image delete URL.
                imageManagerDeleteURL: '/delete_image.php'
            });
        }
        if ($(".rayaneditor").length) {
            $('.rayaneditor').froalaEditor({
                language: 'fa',
                height: '400px',
                imageDefaultDisplay: 'inline',
                fileUploadURL: '/upload_file.php',
                imageManagerLoadURL: '<?= BASE_URL . "filemanger?List=images"; ?>',
                imageUploadURL: '<?= BASE_URL . "filemanger"; ?>',
                // Set the image delete URL.
                imageManagerDeleteURL: '/delete_image.php'
            });
        }
    });

    $(function () {
        $('body').confirmation({
            selector: '[data-toggle="confirmation"]',
            title: 'آیا از حذف این آیتم اطمینان دارید؟',
            btnOkLabel: 'بلی',
            btnCancelLabel: 'خیر'
        });
    });


    $("#menu_button").on("click", function () {
        $("#logo").toggle();
    });

</script>
</body>
</html>
