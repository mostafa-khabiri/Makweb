<?php
/**
 * Created by PhpStorm.
 * User: Mostafa
 * Date: 4/22/2019
 * Time: 1:45 AM
 */
?>
    <div class="container">
        <section class="WhyMySite">

                <div class="row" style="padding: 20px">
                    <div class="text-between">
  <span>
    چرا مک وب را انتخاب کنیم؟ (از منظر صاحبان کسب و کار) <!--Padding is optional-->
  </span>
                    </div>

                <?
                foreach (whymysite::Find(true, "", array("category" => 1, "status" => 1)) as $record) {
                    print " <div class=\"col-lg-4 col-md-4 col-sm-6 col-xs-12\">
  <div class=\"panel panel-default WhyMySite-shadow-top\" style='height: 248px'>
   <div class=\"panel-body\" style='padding-top: 5px;'>
   <div class='row' style='margin-right: 0;margin-left: 0;margin-bottom: 10px;'>
            <div class='col-lg-12 col-md-12 col-sm-12 col-xs-12 zero-pad-col name'>
             <h4 id='nametop$record[id]' class='justufy orange' style='position: relative;min-height: 70px;margin-top: 0;line-height: 1.5;'>$record[nametop]</h4>
        <h4 id='namebottom$record[id]' class='justufy orange namebottom' style='margin-bottom: 0;'>$record[namebottom]</h4>
            </div>
             <div class='col-lg-12 col-md-12 col-sm-12 col-xs-12 zero-pad-col' style='padding-left: 24px;padding-right: 24px;'>
                <img class='img-responsive text-center' style='width: 1080px;height: 100px' src=\"thumb/photos/1080/120/$record[img]\" alt='چرا مک وب را انتخاب کنیم؟ (از منظر صاحبان کسب و کار)'>
            </div>
    </div>
      <div>  
        <div class='justufy limit-line-ellipsis' style='line-height: 1.5;'>$record[content]</div>
      </div>
    </div>
    </div>
  </div>
";
                }
                ?>
                </div>


                <div class="row" style="padding: 20px">
                    <div class="text-between">
  <span>
    چرا مک وب را انتخاب کنیم؟ (از منظر کاربران) <!--Padding is optional-->
  </span>
                    </div>

                <?
                foreach (whymysite::Find(true, "", array("category" => 2, "status" => 1)) as $record) {
                    print " <div class=\"col-lg-4 col-md-4 col-sm-6 col-xs-12\">
  <div class=\"panel panel-default WhyMySite-shadow-bottom\" style='height: 248px'>
   <div class=\"panel-body\" style='padding-top: 5px;'>
   <div class='row' style='margin-right: 0;margin-left: 0;margin-bottom: 10px;'>
            <div class='col-lg-12 col-md-12 col-sm-12 col-xs-12 zero-pad-col name'>
             <h4 id='nametop$record[id]' class='justufy orange' style='position: relative;min-height: 62px;margin-top: 0;line-height: 1.5;'>$record[nametop]</h4>
        <h4 id='namebottom$record[id]' class='justufy orange' style='position:absolute; margin-bottom: 0;'>$record[namebottom]</h4>
            </div>
             <div class='col-lg-12 col-md-12 col-sm-12 col-xs-12 zero-pad-col' style='padding-left: 24px;padding-right: 24px;'>
                <img class='img-responsive pull-left' style='width: 1080px;height: 100px' src=\"thumb/photos/1080/120/$record[img]\" alt='چرا مک وب را انتخاب کنیم؟ (از منظر کاربران)'>
            </div>
    </div>
      <div>  
        <div class='justufy limit-line-ellipsis' style='line-height: 1.5;'>$record[content]</div>
      </div>
    </div>
    </div>
  </div>
";
                }
                ?>
                </div>

        </section>
    </div>

