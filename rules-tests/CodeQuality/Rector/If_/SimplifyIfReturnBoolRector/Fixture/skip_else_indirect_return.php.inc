<?php

namespace Rector\Tests\CodeQuality\Rector\If_\SimplifyIfReturnBoolRector\Fixture;

class SkipElseIndirectReturn
{
    public function run()
    {
        if (1 != count($obj->getChildren())) {
            return false;
        } else {
            $someValue = $this->getSomeValue();
            if (null == $someValue || null == $this->someOtherFunction()) {
                return false;
            }
        }

        return true;
    }
}
