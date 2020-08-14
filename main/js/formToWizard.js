(function ($) {
    "use strict";
    $.fn.formToWizard = function (options) {
        options = $.extend({
            stepi:0
        }, options);

        var element = this;
        var BolStepClear = false;
        var steps = $(element).find("fieldset");
        var count = steps.size();

        //var submmitButtonName = "#" + options.submitButton;
        //$(submmitButtonName).hide();

        // 2
        //$(element).before("<ul id='steps'></ul>");

        steps.each(function (i) {

            $(this).wrap("<div id='step" + i + "'></div>");
            //$(this).append("<p id='step" + i + "commands'></p>");
            $(this).find('.btnNext').append("<p id='step" + i + "commands'></p>");
            // 2
            var stepName = "step" + i;
            var name = $(this).find("legend").html();
            //$("#steps").append("<li id='stepDesc" + i + "'>مرحله " + (i + 1) + "<span>" + name + "</span></li>");

            if (i == 0) {
                createNextButton(i);
                selectStep(i);
                $("#" + stepName + "Next").removeClass('btnOpacity');
                $("#step" + i).children().attr("disabled", "disabled");
            }
            else if (i == count - 1) {
                $("#step" + i).children().attr("disabled", "disabled");
                createPrevButton(i);
                $("#step2 :input").attr("disabled", true);
            }
            else {
                $("#step" + i).children().attr("disabled", "disabled");
                createPrevButton(i);
                createNextButton(i);
                $("#step1 :input").attr("disabled", true);
            }

        });

        function createPrevButton(i) {
            //Step1 Step2
            var stepName = "step" + i;
            //$("#" + stepName + "commands").append("<a href='#' id='" + stepName + "Prev' class='prev btnOpacity'>< Back</a>");
            //$("#" + stepName + "commands").append("<input type='button' id='" + stepName + "Prev' class='prev btnOpacity btn btn-primary btn-bottom-register' value='< بازگشت' />");
            $("#" + stepName + "commands").append("<input type='submit' href='users' id='" + stepName + "' class='btn btn-success btn-bottom-register' style='left: 20px;' value='ادامه >'>");
            $("#" + stepName + "Prev").bind("click", function (e) {

                $("#step" + (i - 1) + "Prev").removeClass('btnOpacity');
                $("#step" + (i - 1) + "Next").removeClass('btnOpacity');
                $("#step" + (i - 1) + " :input").attr("disabled", false);

                $("#step" + (i) + "Prev").addClass('btnOpacity');
                $("#step" + (i) + "Next").addClass('btnOpacity');
                $("#step" + (i) + " :input").attr("disabled", true);

                $("#" + stepName).children().attr("disabled", "disabled");
                $("#step" + (i - 1)).children().removeAttr('disabled');
                $("#step" + (i - 1)).show();
                //$(submmitButtonName).hide();
                $('#submit' + (i)).remove();
                selectStep(i - 1);
            });

        }

        function createNextButton(i) {
            //Step0 Step1
            var stepName = "step" + i;
            //$("#" + stepName + "commands").append("<a href='#' id='" + stepName + "Next' class='next btnOpacity'>Next ></a>");

              $("#" + stepName + "Next").bind("click", function (e) {
                $("#step" + (i + 1) + "Prev").removeClass('btnOpacity');
                $("#step" + (i + 1) + "Next").removeClass('btnOpacity');
                $("#step" + (i + 1) + " :input").attr("disabled", false);

                $("#step" + (i) + "Prev").addClass('btnOpacity');
                $("#step" + (i) + "Next").addClass('btnOpacity');
                $("#step" + (i) + " :input").attr("disabled", true);

                $("#" + stepName).children().attr("disabled", "disabled");
                $("#step" + (i + 1)).children().removeAttr('disabled');
                $("#step" + (i + 1)).show();

                if (i + 2 == count) {
                    finalstep(i);
                    //$(submmitButtonName).show();
                }
                selectStep(i + 1);
            });
            $("#" + stepName + "commands").append("<input type='submit' id='" + stepName + "Next' class='next btnOpacity btn btn-success pull-left' style='margin-top: 15px;margin-bottom: -6px;' value='ادامه >' />");
        }

        function selectStep(i) {
            $("#steps li").removeClass("current");
            $("#stepDesc" + i).addClass("current");
        }

        function finalstep(i) {
            $("#step" + (i + 1) + "commands").append("<input type='submit' id='submit" + (i + 1) + "' class='btn btn-success pull-left' value='ادامه >' />");
        }

        $("#step" + options.stepi).children().removeAttr('disabled');
        $("#step" + options.stepi + " :input").attr("disabled", false);
    };
})(jQuery); 