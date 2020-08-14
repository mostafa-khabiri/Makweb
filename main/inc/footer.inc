<footer>
    <div class="footer">
        <div class="container-fluid">
            <div class="container">
                <div class="row">
                    <div class="col-xl-12 col-lg-12 col-md-12 col-sm-12 col-12">
                        <div class="partner" style="direction: ltr;">
                            <div>
                                <a href="#"><img src="newTemplate/main/img/partner-1.png" alt="partner"></a>
                            </div>
                            <div>
                                <a href="#"><img src="newTemplate/main/img/partner-2.png" alt="partner"></a>
                            </div>
                            <div>
                                <a href="#"><img src="newTemplate/main/img/partner-3.png" alt="partner"></a>
                            </div>
                            <div>
                                <a href="#"><img src="newTemplate/main/img/partner-4.png" alt="partner"></a>
                            </div>
                            <div>
                                <a href="#"><img src="newTemplate/main/img/partner-5.png" alt="partner"></a>
                            </div>
                            <div>
                                <a><img src="newTemplate/main/img/partner-6.png" id='jxlzesgtnbqenbqesizpfukzapfu'
                                        style='cursor:pointer' alt='logo-samandehi'
                                        onclick='window.open("https://logo.samandehi.ir/Verify.aspx?id=1022965&p=rfthobpduiwkuiwkpfvlgvkadshw", "Popup","toolbar=no, scrollbars=no, location=no, statusbar=no, menubar=no, resizable=0, width=450, height=630, top=30")'>
                                </a>
                            </div>
                            <div>
                                <a><img id='rgvlhwlawmcslbrhnbpe' style='cursor:pointer'
                                        src="newTemplate/main/img/partner-7.png"
                                        onclick='window.open("https://trustseal.enamad.ir/Verify.aspx?id=54872&p=yncrodshaqgwqgwlwkyn", "Popup","toolbar=no, location=no, statusbar=no, menubar=no, scrollbars=1, resizable=0, width=580, height=600, top=30")'
                                        alt="partner">
                                </a>
                            </div>
                        </div>
                    </div>
                </div>
                <div class="row mt-xl-5 mt-lg-4 mt-3">
                    <div class="col-xl-4 col-lg-4 col-md-6 col-sm-12 col-12">
                        <?php foreach (post::Find(true, "", array("category" => 1), " order by id desc limit 0,3") as $record) {
                            print '<a href="news/' . $record["url"] . '" class="card">
                            <img src="' . $record["image"] . '" alt="' . $record["title"] . '">
                            <div class="card-body">
                                <div class="text-right">
                                    <span class="date">98/12/08</span>
                                    <p>' . $record["title"] . '</p>
                                </div>
                                <div class="text-left">
                                    <span class="more">مشاهده</span>
                                </div>
                            </div>
                        </a>';
                        } ?>
                    </div>
                    <div class="d-xl-none d-lg-none col-md-6 d-md-block d-sm-none d-none">
                        <a href="#" class="card">
                            <img src="newTemplate/main/img/footer-1.png" alt="content image">
                            <div class="card-body">
                                <div class="text-right">
                                    <span class="date">98/12/08</span>
                                    <p>ساخت اپلیکیشن موبایل در دستور کار مک وب، قرار گرفت</p>
                                </div>
                                <div class="text-left">
                                    <span class="more">مشاهده</span>
                                </div>
                            </div>
                        </a>

                        <a href="#" class="card">
                            <img src="newTemplate/main/img/footer-2.png" alt="content image">
                            <div class="card-body">
                                <div class="text-right">
                                    <span class="date">98/12/08</span>
                                    <p>گزینه پیشنهادات ویژه، به سایت داخلی اعضاء اضافه شد</p>
                                </div>
                                <div class="text-left">
                                    <span class="more">مشاهده</span>
                                </div>
                            </div>
                        </a>

                        <a href="#" class="card">
                            <img src="newTemplate/main/img/footer-3.png" alt="content image">
                            <div class="card-body">
                                <div class="text-right">
                                    <span class="date">98/12/08</span>
                                    <p>کلیپ های صوتی، ویدئویی و تصویری به سایت اختصاصی اعضاء اضافه شد</p>
                                </div>
                                <div class="text-left">
                                    <span class="more">مشاهده</span>
                                </div>
                            </div>
                        </a>
                    </div>
                    <div class="col-xl-8 col-lg-8 col-md-12 col-sm-12 col-12">
                        <div class="row">
                            <div class="info col-xl-12 col-lg-12 col-md-12 col-sm-12 col-12">
                                <div class="bg">
                                    <div class="row">
                                        <div class="col-xl-2 col-lg-2 col-md-4 col-sm-6 col-6 mt-4">
                                            <div class="box">
                                                <img src="newTemplate/main/img/icons-footer-megaphone.svg" alt="">
                                                <span class="num"><?php echo jobopportunities::Find(false, array("count(id)"), "") ?></span>
                                                <span class="text">آگهی در فرصت های شغلی</span>
                                            </div>
                                        </div>

                                        <div class="col-xl-2 col-lg-2 col-md-4 col-sm-6 col-6 mt-4">
                                            <div class="box">
                                                <img src="newTemplate/main/img/icons-footer-image.svg" alt="">
                                                <span class="num"><?php echo advertisingpackages::Find(false, array("count(id)"), "") ?></span>
                                                <span class="text">اسلایدرهای تبلیغاتی</span>
                                            </div>
                                        </div>

                                        <div class="col-xl-2 col-lg-2 col-md-4 col-sm-6 col-6 mt-4">
                                            <div class="box">
                                                <img src="newTemplate/main/img/icons-footer-globe.svg" alt="">
                                                <span class="num"><?php echo users::Find(false, array("count(id)"), "") ?></span>
                                                <span class="text">دارندگان سایت اختصاصی</span>
                                            </div>
                                        </div>

                                        <div class="col-xl-2 col-lg-2 col-md-4 col-sm-6 col-6 mt-4">
                                            <div class="box">
                                                <img src="newTemplate/main/img/icons-footer-promotions.svg" alt="">
                                                <span class="num"><?php echo specialprojects::Find(false, array("count(id)"), "") ?></span>
                                                <span class="text">پیشنهادات ویژه</span>
                                            </div>
                                        </div>

                                        <div class="col-xl-2 col-lg-2 col-md-4 col-sm-6 col-6 mt-4">
                                            <div class="box">
                                                <img src="newTemplate/main/img/icons-footer-EmptyCapacities.svg" alt="">
                                                <span class="num"><?php echo emptycapacityform::Find(false, array("count(id)"), "") ?></span>
                                                <span class="text">ظرفیت‌های خالی</span>
                                            </div>
                                        </div>

                                        <div class="col-xl-2 col-lg-2 col-md-4 col-sm-6 col-6 mt-4">
                                            <div class="box">
                                                <img src="newTemplate/main/img/icons-footer-repairing-service.svg"
                                                     alt="">
                                                <span class="num"><?php echo categoryusers::Find(false, array("count(id)"), "", "WHERE parent_id <>0") ?></span>
                                                <span class="text">سامانه‌های تخصصی</span>
                                            </div>
                                        </div>
                                    </div>
                                </div>
                            </div>
                            <div class="col-xl-3 col-lg-3 col-md-3 col-sm-6 col-6">
                                <a href="comingsoon" class="box-app">
                                    <img class="icon-app" src="newTemplate/main/img/icons-app-android.svg"
                                         alt="android">
                                    <span>دانلود اندروید</span>
                                    <img class="icon-download" src="newTemplate/main/img/icons-download.svg"
                                         alt="download">
                                </a>
                            </div>
                            <div class="col-xl-3 col-lg-3 col-md-3 col-sm-6 col-6">
                                <a href="comingsoon" class="box-app">
                                    <img class="icon-app" src="newTemplate/main/img/icons-app-apple.svg" alt="apple">
                                    <span>دانلود IOS</span>
                                    <img class="icon-download" src="newTemplate/main/img/icons-download.svg"
                                         alt="download">
                                </a>
                            </div>
                            <div class="col-xl-6 col-lg-6 col-md-6 col-sm-12 col-12">
                                <div class="nav-more">
                                    <ul>
                                        <?php foreach (footer::Find(true, "", array("category" => 2), " order by id desc limit 5") as $record) {
                                            print '<li class="nav-item"><a class="nav-link" href="' . $record["url"] . '">' . $record["name"] . '</a></li>';
                                        } ?>
                                    </ul>
                                </div>
                            </div>
                        </div>
                    </div>
                </div>
            </div>
        </div>
    </div>
    <div class="copyright">
        <div class="scroll-top">
            <img class="bg" src="newTemplate/main/img/bg-scroll-top.svg" alt="bg scroll">
            <a onclick="topFunction()">
                <img src="newTemplate/main/img/icons-top-scroll.svg" alt="arrow">
            </a>
        </div>
        <div class="container-fluid">
            <div class="container">
                <div class="row">
                    <div class="col-xl-12 col-lg-12 col-md-12 col-sm-12 col-12">
                        کلیه حقوق مادی و معنوی این پرتال متعلق به مک وب می باشد
                    </div>
                </div>
            </div>
        </div>
    </div>
</footer>
