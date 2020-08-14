<style>
    body{overflow-x:hidden;}
</style>

<div class="card">
    <div class="card-header">مدیریت کاربری</div>
    <div class="card-body">
        <ol class="dash-menu">
            <li class="orange"><a href="users"><i class="fa fa-desktop"></i>پیشخوان</a></li>
            <li class="orange"><a href="users/menu"><i class="fa fa-navicon"></i> منوها / صفحات</a></li>
            <li class="orange"><a href="users/slideshow"><i class="fa fa-sliders"></i>لیست اسلایدشو ها</a></li>
            <!--<li class="orange"><a target="_blank" href="forum"><i class="fa fa-comments"></i>تالارگفتگو <span
                            class="red">(جدید)</span></a></li>-->
            <li class="orange"><a class="toggle-custom" id="btn-1" data-toggle="collapse" style="cursor: pointer"
                                  data-target="#submenu1" aria-expanded="false"><i class="fa fa-retweet"></i>ارتباط با
                    همکاران <span class="red">(جدید)</span></a>
                <ul class="collapse" id="submenu1" role="menu" aria-labelledby="btn-1">
                    <ol class="dash-menu">
                        <li class="orange"><a href="users/colleague">صندوق پیام های ارسالی</a>
                        </li>
                        <li class="orange"><a href="users/receivecolleague">صندوق پیام های دریافتی</a><i class="badge red"><?=$countColleague=count(child_colleague_group::Find(true,"","","WHERE user_id<>".userpanel::GetID()->id." AND NOT FIND_IN_SET(" . userpanel::GetID()->id . ",view) AND FIND_IN_SET(" . userpanel::GetID()->id . ",colleague_id)"));
                            ?></i>
                        </li>
                        <li class="orange"><a href="users/addcolleague">ارسال پیام اختصاصی</a>
                        </li>
                        <li class="orange"><a href="users/addcolleagues">ارسال پیام گروهی</a>
                        </li>
                    </ol>
                </ul>
            </li>
            <!--<li class="orange"><a href="users/unit"><i class="fa fa-weight"></i>واحدهای اندازه گیری </a></li>-->
            <li class="orange"><a href="users/orderproduct"><i class="fa fa-shopping-basket"></i>سفارشات دریافتی </a></li>
            <li class="orange"><a href="users/messagebox"><i class="fa fa-envelope"></i>فرم های دریافتی ارتباط با ما</a></li>
            <li class="orange"><a href="users/ticket"><i class="fa fa-headphones"></i>پشتیبانی مک وب</a></li>
            <li class="orange"><a href="users/socialnetwork"><i class="fa fa-share-alt"></i> شبکه های اجتماعی</a>
            </li>
            <li class="orange"><a href="users/map"><i class="fa fa-map"></i> نقشه گوگل</a></li>
            <li class="orange"><a href="users/settings"><i class="fa fa-support"></i>تنظیمات سایت ( نام , لوگو , شهر و
                    ...) </a></li>
            <li class="orange"><a href="users/seo"><i class="fa fa-cogs"></i>کلمات کلیدی سئو </a></li>
            <li class="orange"><a href="users/password"><i class="fa fa-key"></i>تغییر رمز عبور</a></li>
           <!--<li class="orange"><a href="users/profile"><i class="fa fa-user-circle"></i> اطلاعات کاربری</a></li>-->
            <li class="orange"><a href="users/plan"><i class="fa fa-gift"></i> تعرفه ها / تمدید عضویت</a></li>
            <li class="orange"><a href="users/payment"><i class="fa fa-money"></i>پرداخت و امور مالی</a></li>
            <li class="orange"><a href="users/page"><i class="fa fa-graduation-cap"></i>آموزش مدیریت
                    سایت</a></li>
            <li class="orange"><a target="_blank" href="http://<?= @$_SESSION['userpanel']['subdomin']; ?>.makweb.ir"><i
                            class="fa fa-link"></i>نمایش سایت</a></li>
            <li class="orange"><a href="users/logout"><i class="fa fa-power-off"></i>خروج</a></li>
            <!--<li class="orange"><a href="users/gallery"><i class="fa fa-film"></i>کلیپ های صوتیء تصویری و ویدیو</a></li>-->
            <!--<li class="orange"><a href="users/offer"><i class="fa fa-star  "></i>پیشنهاد ویژه</a></li>-->
            <!--<li class="orange"><a href="users/about"><i class="fa fa-info"></i>اطلاعات درباره ما</a></li>-->
            <!--<li class="orange"><a href="users/categoryproduct"><i class="fa fa-list"></i> دسته بندی محصولات</a></li>-->
            <!--<li class="orange"><a href="users/product"><i class="fa fa-first-order"></i> محصول / خدمات / سفارش</a></li>-->
            <!--<li class="orange"><a href="users/orderproduct"><i class="fa fa-shopping-basket"></i> محصولات سفارش داده شده</a></li>-->
            <!--<li class="orange"><a href="users/page"><i class="fa fa-book"></i>4 باکس صفحه نخست</a></li>-->
            <!--<li class="orange"><a href="users/service"><i class="fa fa-product-hunt"></i> 4 باکس نوار منو</a></li>-->
            <!--<li class="orange"><a href="users/contactus"><i class="fa fa-phone"></i>اطلاعات تماس با ما</a></li>-->
            <!--<li class="orange"><a href="users/faq"><i class="fa fa-question"></i> سوالات متداول</a></li>-->
            <!--<li class="orange"><a href="users/ads"><i class="fa fa-tasks"></i>فرصت های شغلی</a></li>-->
            <!--<li class="orange"><a href="users/emptycapacity"><i class="fa fa-circle"></i>ظرفیت های خالی</a></li>-->
            <!--<li class="orange"><a href="users/news"><i class="fa fa-newspaper-o"></i>اخبار سایت</a></li>-->
            <!--<li class="orange"><a href="users/adss"><i class="fa fa-ticket"></i> آگهی ها</a></li>-->
        </ol>

    </div>
</div>