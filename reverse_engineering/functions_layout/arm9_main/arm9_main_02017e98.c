
/* JUS-CLASS jus_TagPL4R::vfunc_28 [class-virtual] slot 28 of vtable 02096d78 (own slot, not
   inherited) */

void jus_TagPL4R::vfunc_28(int *param_1,int param_2,int param_3,int *param_4,undefined4 *param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  byte bVar6;
  int iVar7;
  uint uVar8;
  undefined4 local_24;
  undefined4 local_20;
  
  iVar2 = (**(code **)(*param_4 + 0x20))();
  if (iVar2 == 0x314c4150) {
    local_24 = *param_5;
    local_20 = param_5[1];
    FUN_02016d90(param_1,param_2,param_3,param_4,&local_24);
    iVar2 = 0;
    while( true ) {
      if ((int)local_20._2_2_ - (int)local_24._2_2_ <= iVar2) break;
      iVar3 = (**(code **)(*param_1 + 0x38))(param_1,iVar2 + param_3);
      iVar4 = (**(code **)(*param_4 + 0x34))(param_4,iVar2 + local_24._2_2_);
      iVar7 = 0;
      while( true ) {
        if ((int)(short)local_20 - (int)(short)local_24 <= iVar7) break;
        uVar8 = (short)local_24 + iVar7;
        iVar1 = param_2 + iVar7 >> 1;
        bVar6 = *(byte *)(iVar3 + iVar1);
        uVar8 = (int)(uint)*(byte *)(iVar4 + ((int)(uVar8 + ((uint)((int)uVar8 >> 2) >> 0x1d)) >> 3)
                                    ) >> (7 - (uVar8 & 7) & 0xff) & 1;
        if ((param_2 + iVar7 & 1U) == 0) {
          bVar6 = (byte)uVar8 | bVar6 & 0xf0;
        }
        else {
          bVar6 = bVar6 & 0xf | (byte)(uVar8 << 4);
        }
        *(byte *)(iVar3 + iVar1) = bVar6;
        iVar7 = iVar7 + 1;
      }
      iVar2 = iVar2 + 1;
    }
    uVar5 = (**(code **)(*param_4 + 0x60))();
    (**(code **)(*param_1 + 0x6c))(param_1,uVar5);
  }
  else {
    FUN_02016e44(param_1,param_2,param_3,param_4,param_5);
  }
  return;
}

