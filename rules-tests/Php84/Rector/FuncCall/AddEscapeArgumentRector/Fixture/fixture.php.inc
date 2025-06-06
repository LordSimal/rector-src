<?php

namespace Rector\Tests\Php84\Rector\FuncCall\AddEscapeArgumentRector;

final class Fixture
{
    public function run($a, $b, $c)
    {
        str_getcsv($a, $b, $c);

        $obj = new \SplFileObject();
        $obj->fputcsv($a, $b, $c);
    }
}

?>
-----
<?php

namespace Rector\Tests\Php84\Rector\FuncCall\AddEscapeArgumentRector;

final class Fixture
{
    public function run($a, $b, $c)
    {
        str_getcsv($a, $b, $c, escape: '\\');

        $obj = new \SplFileObject();
        $obj->fputcsv($a, $b, $c, escape: '\\');
    }
}

?>
