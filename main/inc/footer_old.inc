<?php

function viewDown($parent = 0)
{
    global $db;

    foreach ($db->select('rayan_menu', '', array('parent_id' => $parent, "position" => "down"), "order by rang asc")->results() as $record) {

        if ($record['module'] == "public") {

            print '<li><a  ' . ("" . $_GET['model'] === $record['url'] ? 'class="act-link"' : '') . '  href="' . $record['url'] . '" >' . $record['name'] . '</a>';

        } else if ($record['module'] == "categorypost") {
            print '<li><a >' . $record['name'] . '</a>';
            print '<ul  >';
            categoryviewDown($record['param']);
            print '</ul>';
        } else if ($record['module'] == "page") {
            $page = page::Find(false, "", array("id" => $record['param']));
            print '<li><a ' . ("" . $_GET['model'] === $record['url'] ? 'class="act-link"' : '') . ' href="page/' . $page['url'] . '" >' . $record['name'] . '</a>';

        } else if ($record['module'] == "post") {
            $page = post::Find(false, "", array("id" => $record['param']));
            print '<li><a ' . ("" . $_GET['model'] === $record['url'] ? 'class="act-link"' : '') . ' href="blog/' . $page['url'] . '" >' . $record['name'] . '</a>';

        }
        if ($db->select('rayan_menu', '', array('parent_id' => $record['id'], "position" => "down"))->results()) {
            print '<ul  >';
            viewDown($record['id']);
            print '</ul>';
        }
        print '</li>';
    }


}

function categoryviewDown($parent = 0, $url = 'blog/category')
{
    global $db;

    foreach ($db->select('rayan_category_post', '', array('parent_id' => $parent, "position" => "down"))->results() as $record) {

        print '<li><a ' . ("" . $_GET['model'] === $record['url'] ? 'class="act-link"' : '') . '  href="' . $url . '/' . $record['url'] . '" >' . $record['name'] . '</a>';
        if ($db->select('rayan_category_post', '', array('parent_id' => $record['id'], "position" => "down"))->results()) {
            print '<ul  >';
            view($record['id'], $url . '/' . $record['url']);
            print '</ul>';
        }
        print '</li>';
    }


}


function viewDown1($parent = 0)
{
    global $db;

    foreach ($db->select('rayan_menu', '', array('parent_id' => $parent, "position" => "down1"), "order by rang asc")->results() as $record) {

        if ($record['module'] == "public") {

            print '<li><a  ' . ("" . $_GET['model'] === $record['url'] ? 'class="act-link"' : '') . '  href="' . $record['url'] . '" >' . $record['name'] . '</a>';

        } else if ($record['module'] == "categorypost") {
            print '<li><a >' . $record['name'] . '</a>';
            print '<ul  >';
            categoryviewDown1($record['param']);
            print '</ul>';
        } else if ($record['module'] == "page") {
            $page = page::Find(false, "", array("id" => $record['param']));
            print '<li><a ' . ("" . $_GET['model'] === $record['url'] ? 'class="act-link"' : '') . ' href="page/' . $page['url'] . '" >' . $record['name'] . '</a>';

        } else if ($record['module'] == "post") {
            $page = post::Find(false, "", array("id" => $record['param']));
            print '<li><a ' . ("" . $_GET['model'] === $record['url'] ? 'class="act-link"' : '') . ' href="blog/' . $page['url'] . '" >' . $record['name'] . '</a>';

        }
        if ($db->select('rayan_menu', '', array('parent_id' => $record['id'], "position" => "down1"))->results()) {
            print '<ul  >';
            viewDown1($record['id']);
            print '</ul>';
        }
        print '</li>';
    }


}

function categoryviewDown1($parent = 0, $url = 'blog/category')
{
    global $db;

    foreach ($db->select('rayan_category_post', '', array('parent_id' => $parent, "position" => "down1"))->results() as $record) {

        print '<li><a ' . ("" . $_GET['model'] === $record['url'] ? 'class="act-link"' : '') . '  href="' . $url . '/' . $record['url'] . '" >' . $record['name'] . '</a>';
        if ($db->select('rayan_category_post', '', array('parent_id' => $record['id'], "position" => "down1"))->results()) {
            print '<ul  >';
            viewDown1($record['id'], $url . '/' . $record['url']);
            print '</ul>';
        }
        print '</li>';
    }


}

?>

<div class="top-footer">
    <div class="container">
        <div class="row">
            <ul class="col-lg-12">

                <?
                if (isset($_GET['parameterstwo'])) {
                    viewDown1(0);
                } else {
                    viewDown(0);
                }
                ?>
            </ul>
        </div>
    </div>
    <!--<hr style="margin-top: 0;margin-bottom: 0;border-color: #f4861e">-->
    <div class="top-footer-namad">
        <canvas id="canvas" style="width: 100%;height: 100%;position: relative;"></canvas>
        <img id="picture" src="/template/main/img/NamadCity.png" class="img-responsive text-center myimg"
             style="max-height:60%;position: absolute;left: 0;bottom: 7px;"/>
    </div>
</div>

<footer>

    <div class="container">

        <div class="row">
            <div class="footer-t">
                <div class="col-lg-4 col-md-4">
                    <i class="fa fa-support"></i>
                    <span>پشتیبانی واقعی  از طریق راه کار های مختلف ارتباطی  </span>
                    <p>در&nbsp;&nbsp;7&nbsp;&nbsp;روز&nbsp;&nbsp;هفته&nbsp;&nbsp;24&nbsp;&nbsp;ساعته&nbsp;&nbsp;پاسخگوی&nbsp;&nbsp;شما&nbsp;&nbsp;هستیم</p>
                </div>
                <div class="col-lg-4 col-md-4">

                    <i class="fa fa-phone-square"></i>
                    <span>تماس ضروری و مهم/ارتباط فوری  تلگرامی</span>
                    <p class="text text-white"><span style="color: white!important;" class="text text-white" dir="ltr"> @makwebco&nbsp;&nbsp;&nbsp;/&nbsp;&nbsp;&nbsp;0913 118 0575 </span>
                    </p>
                </div>
                <div class="col-lg-4  col-md-4 text-right">

                    <i class="fa fa-comments"></i>
                    <span>دایره المعارف ها/همایش ها و سمینارها/قوانین صنفی </span>
                    <p dir="ltr">اطلاعات فوق را جهت درج در مک وب ، برای ما ارسال کنید </p>
                </div>
            </div>
        </div>
        <hr>
        <div class="row">
            <div class="col-lg-4 col-md-4">
                <div class="foot-box-title">:: پرتال ملی مک وب در یک نگاه ...</div>
                <ul class="foot-box-list">
                    <? foreach (footer::Find(true, "", array("category" => 1)) as $record) {
                        printf("<li><a href=\"%s\">%s</a></li>", $record['url'], $record['name']);
                    } ?>
                </ul>

            </div>
            <div class="col-lg-4 col-md-4">
                <div class="foot-box-title">:: از امکانات و ویژه گی های مک وب، بهره مند شوید ...</div>
                <ul class="foot-box-list">
                    <? foreach (footer::Find(true, "", array("category" => 2)) as $record) {
                        printf("<li><a href=\"%s\">%s</a></li>", $record['url'], $record['name']);
                    } ?>
                </ul>
            </div>
            <div class="col-lg-4 col-md-4">
                <div class="foot-box-title">:: آخرین رویدادها و اطلاعیه های مک وب ...</div>
                <ul class="foot-box-list">
                    <? foreach (post::Find(true, "", array("category" => 1), " order by id limit 0,9") as $record) {
                        printf("<li><a href=\"news/%s\">%s</a></li>", $record['url'], $record['title']);
                    } ?>
                </ul>
            </div>
        </div>
        <div class="row">
            <div class="col-lg-4 col-md-4">
                <div class="col-lg-6 col-md-6 col-sm-6 col-xs-6 box_image_footer img-responsive"><img
                            id='rgvlhwlawmcslbrhnbpe' class="img-responsive myimg" style='cursor:pointer'
                            onclick='window.open("https://trustseal.enamad.ir/Verify.aspx?id=54872&p=yncrodshaqgwqgwlwkyn", "Popup","toolbar=no, location=no, statusbar=no, menubar=no, scrollbars=1, resizable=0, width=580, height=600, top=30")'
                            alt='' src='https://trustseal.enamad.ir/logo.aspx?id=54872&p=fujyaodsukaqpeukqesg'/>
                </div>
                <div class="col-lg-6 col-md-6 col-sm-6 col-xs-6 box_image_footer">
                    <img class="img-responsive myimg" id='jxlzesgtnbqenbqesizpfukzapfu' style='cursor:pointer'
                         onclick='window.open("https://logo.samandehi.ir/Verify.aspx?id=1022965&p=rfthobpduiwkuiwkpfvlgvkadshw", "Popup","toolbar=no, scrollbars=no, location=no, statusbar=no, menubar=no, resizable=0, width=450, height=630, top=30")'
                         alt='logo-samandehi'
                         src='https://logo.samandehi.ir/logo.aspx?id=1022965&p=nbpdlymaodrfodrfbsiywlbqujyn'/>
                </div>
            </div>
            <div class="col-lg-4 col-md-4">
                <ul class="foot-box-list">
                    <li><a> تعداد کل آگهی ها در فرصت های شغلی
                            ........................................ <? echo jobopportunities::Find(false, array("count(id)"), "") ?></a>
                    </li>
                    <li><a> تعداد کل اسلایدر های تبلیغاتی
                            ................................................... <? echo advertisingpackages::Find(false, array("count(id)"), "") ?></a>
                    </li>
                    <li><a> تعداد کل دارندگان سایت اختصاصی
                            ............................................ <? echo users::Find(false, array("count(id)"), "") ?></a>
                    </li>
                </ul>
                <div class="col-md-12 text-center ">
                    <ul class="connect-us row fade-down">
                        <li><a target="_blank" href="https://www.facebook.com/makwebir" class="face" title="Facebook"><i
                                        class="fa fa-facebook"></i></a></li>
                        <li><a target="_blank" href="https://www.twitter.com/makwebir" class="twit" title="Twitter"><i
                                        class="fa fa-twitter"></i></a></li>
                        <li><a target="_blank" href="https://plus.google.com/makweb" class="google" title="Google +"><i
                                        class="fa fa-google-plus"></i></a></li>
                        <li><a target="_blank" href="https://ir.linkedin.com/in/makweb" class="linkedin"
                               title="Linkedin"><i class="fa fa-linkedin"></i></a></li>
                        <li><a target="_blank" href="https://www.instagram.com/makwebir" class="instagram"
                               title="Instagram"><i class="fa fa-instagram"></i></a></li>
                        <li><a target="_blank" href="https://telegram.me/makwebir" class="telegram" title="Telegram"><i
                                        class="fa fa-telegram"></i></a></li>
                    </ul>
                    <hr>
                </div>
            </div>
            <div class="col-lg-4 col-md-4">
                <div class="center-block">
                    <!--<div class="col-lg-6  box_image_footer" style="top: 0px"> <a href="comingsoon"> <img src="/template/main/img/1.png"  class="text-center myimg" ></a><br><br></div>-->
                    <div class="col-lg-6 col-md-6 col-sm-6 col-xs-6  box_image_footer"><a href="comingsoon"><img
                                    src="/template/main/img/android.png" class="img-responsive text-center"
                                    style="max-height: 100%;max-width: 100%"/></a><br><br></div>
                    <div class="col-lg-6 col-md-6 col-sm-6 col-xs-6 box_image_footer"><a href="comingsoon"><img
                                    src="/template/main/img/ios.png" class="img-responsive text-center "
                                    style="max-height: 100%;max-width: 100%"/></a><br><br></div>
                </div>
            </div>
        </div>
    </div>


    <div class="copyright">
        <hr style="border-color: #f4861e">
        <a>کلیه حق و حقوق مادی و معنوی این پرتال متعلق به مک وب می باشد.</a>

    </div>
</footer>


<script src="template/main/js/jquery-2.1.4.min.js"></script>
<script src="template/main/js/modernizr.js"></script>
<script type="text/javascript" src="js/tinymce/jquery.tinymce.min.js"></script>
<script type="text/javascript" src="js/tinymce/tinymce.min.js"></script>


<script src="template/main/js/bootstrap.min.js"></script>

<!-- include summernote css/js-->
<link href="template/main/css/summernote.css" rel="stylesheet">
<script src="template/main/js/summernote.js"></script>

<script src="template/main/js/form-wizard.js"></script>
<script src="template/main/js/confirm-bootstrap.js"></script>

<script src="template/main/js/jquery.newsTicker.min.js"></script>

<!-- BootStrap Select -->
<script type="text/javascript" src="template/main/js/bootstrap-select.js"></script>

<!-- datatable -->
<script type="text/javascript" src="template/main/js/datatable/jquery.dataTables.js"></script>
<script type="text/javascript" src="template/main/js/datatable/dataTables.bootstrap.min.js"></script>
<? /* if (http::_GET("model") == "users") { ?>
    <script src="http://code.jquery.com/jquery-1.12.4.js"></script>
    <script src="http://cdn.datatables.net/1.10.15/js/jquery.dataTables.min.js"></script>
    <script src="http://cdn.datatables.net/1.10.15/js/dataTables.bootstrap.min.js"></script>

<? } */ ?>

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
    $(window).load(function() {
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

    $(function() {
        $('body').confirmation({
            selector: '[data-toggle="confirmation"]',
            title:'آیا از حذف این آیتم اطمینان دارید؟',
            btnOkLabel:'بلی',
            btnCancelLabel:'خیر'
        });
    });


    $("#menu_button").on("click",function () {
        $("#logo").toggle();
    });

</script>
</body>
</html>