<section id="why_makweb">
    <div class="container-fluid">
        <div class="container">
            <div class="row head-section">
                <div class="col-xl-12 col-lg-12 col-md-12 col-sm-12 col-12">
                    <h3>چرا مک وب</h3>
                    <p>دلایلی چند که چرا مکـ وبـ آن چیزیست که شما بدنبال آن هستید</p>
                </div>
            </div>
            <div class="row">
                <div class="col-xl-10 pull-xl-1 col-lg-10 pull-lg-1 col-md-12 col-sm-12 col-12">
                    <div class="row">
                        <!-- Why MakWeb Manager -->
                        <?php foreach (whymysite::Find(true, "", array("category" => 1, "status" => 1), "order by id desc limit 2") as $record) {
                            print '<div class="col-xl-6 col-lg-6 col-md-6 col-sm-12 col-12">
                            <a href="#" class="card">
                                <img src="thumb/photos/1080/120/' . $record["img"] . '" alt="چرا مک وب را انتخاب کنیم؟">
                                <div class="card-body">
                                    <span class="section">صاحب کسب و کار</span>
                                    <b>' . $record["nametop"] . '</b>
                                    <p>' . $record["namebottom"] . '</p>
                                    <span class="more">اطلاعات بیشتر</span>
                                </div>
                                <div class="card-overlay">
                                    <p>' . $record["content"] . '</p>
                                </div>
                            </a>
                        </div>';
                        }
                        ?>
                        <!-- Why MakWeb User -->
                        <?php foreach (whymysite::Find(true, "", array("category" => 2, "status" => 1), "order by id desc limit 2") as $record) {
                            print '<div class="col-xl-6 col-lg-6 col-md-6 col-sm-12 col-12">
                            <a href="#" class="card">
                                <img src="thumb/photos/1080/120/' . $record["img"] . '" alt="چرا مک وب را انتخاب کنیم؟">
                                <div class="card-body">
                                    <span class="section">کاربران</span>
                                    <b>' . $record["nametop"] . '</b>
                                    <p>' . $record["namebottom"] . '</p>
                                    <span class="more">اطلاعات بیشتر</span>
                                </div>
                                <div class="card-overlay">
                                    <p>' . $record["content"] . '</p>
                                </div>
                            </a>
                        </div>';
                        }
                        ?>
                    </div>
                </div>
            </div>
        </div>
    </div>
</section>