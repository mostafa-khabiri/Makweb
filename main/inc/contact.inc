<?php
/**
 * Created by PhpStorm.
 * User: MOSTAFA
 * Date: 5/13/2020
 * Time: 12:26 AM
 */
?>

<section id="contact_us">
    <div class="container-fluid">
        <div class="container">
            <div class="row">
                <div class="col-xl-8 pull-xl-2 col-lg-8 pull-lg-2 col-md-12 pull-0 col-sm-12 col-12">
                    <h3>مک وب در یک نگاه</h3>
                        <?php foreach (footer::Find(true, "", array("category" => 1)) as $record) {
                            print '<a href="' . $record["url"] . '"><p class="text-center">' . $record["name"] . '</p></a>';
                        } ?>
                </div>
            </div>
            <div class="row mt-lg-5 mt-md-4 mt-2">
                <div class="col-xl-4 pull-xl-2 col-lg-4 pull-lg-2 col-md-6 pull-0 col-sm-12 col-12 d-inline-flex align-items-center mt-2">
                    <img class="icons" src="newTemplate/main/img/icons-support.svg" alt="support">
                    <p class="text m-0">
                        <span>پشتیبانی واقعی</span> <b>از طریق راه کارهای مختلف ارتباطی</b></br>
                        در 7 روز هفته 24 ساعتـه پاسخگـوی شمـا هستیم
                    </p>
                </div>
                <div class="col-xl-4 pull-xl-2 col-lg-4 pull-lg-2 col-md-6 pull-0 col-sm-12 col-12 d-inline-flex align-items-center mt-2">
                    <img class="icons" src="newTemplate/main/img/icons-phone.svg" alt="phone">
                    <p class="text m-0">
                        <span>تماس ضروری و مهم |</span> <b>ارتباط فوری تلگرامی</b></br>
                        0575 118 0913 | makwebco@ <img src="newTemplate/main/img/icons-social-telegram.svg"
                                                       alt="telegram">
                    </p>
                </div>
            </div>
            <div class="row">
                <div class="col-xl-8 pull-xl-2 col-lg-8 pull-lg-2 col-md-12 pull-0 col-sm-12 col-12 mt-3">
                    <p class="text-center"><span>درج رایگان</span> <b>دایره المعـارف‌هـا، همایش هـا، سمینارهـا و قوانین
                            صنفی</b> ارســالی شمـا در مکـ وب ... برای مـا ارسـال کنیـد</p>
                </div>
            </div>
            <div class="row">
                <div class="col-xl-6 pull-xl-3 col-lg-6 pull-lg-3 col-md-12 pull-0 col-sm-12 col-12 mt-4 mb-4">
                    <ul class="nav social">
                        <li class="nav-item"><a class="nav-link" href="https://www.twitter.com/makwebir"><img
                                        src="newTemplate/main/img/icons-social-twitter.svg"
                                        alt="twitter"></a></li>
                        <li class="nav-item"><a class="nav-link" href="https://www.facebook.com/makwebir"><img
                                        src="newTemplate/main/img/icons-social-facebook.svg"
                                        alt="facebook"></a></li>
                        <li class="nav-item"><a class="nav-link" href="https://plus.google.com/makweb"><img
                                        src="newTemplate/main/img/icons-social-google-plus.svg"
                                        alt="google-plus"></a></li>
                        <li class="nav-item"><a class="nav-link" href="https://ir.linkedin.com/in/makweb"><img
                                        src="newTemplate/main/img/icons-social-linkedin.svg"
                                        alt="linkedin"></a></li>
                        <li class="nav-item"><a class="nav-link" href="https://www.instagram.com/makwebir"><img
                                        src="newTemplate/main/img/icons-social-instagram.svg"
                                        alt="instagram"></a></li>
                        <li class="nav-item"><a class="nav-link" href="https://telegram.me/makwebir"><img
                                        src="newTemplate/main/img/icons-social-telegram.svg"
                                        alt="telegram"></a></li>
                    </ul>
                </div>
            </div>
        </div>
    </div>
</section>