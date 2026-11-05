
/* JUS-CLASS jus_Class_02094130::vfunc_07 [class-virtual] slot 7 of vtable 02094130 (own slot, not
   inherited) */

int * jus_Class_02094130::vfunc_07(undefined4 param_1,int *param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int *unaff_r9;
  
  iVar2 = (**(code **)(*param_2 + 0x2c))(param_2,0);
  iVar3 = (**(code **)(*param_2 + 0x28))();
  iVar4 = (**(code **)(*param_2 + 0x2c))(param_2,0);
  iVar5 = (**(code **)(*param_2 + 0x28))();
  iVar4 = iVar4 + iVar5;
  uVar6 = (**(code **)(*param_2 + 0x1c))();
  DC_FlushRange(iVar4,uVar6);
  iVar5 = (**(code **)(*param_2 + 0x28))();
  iVar9 = 0;
  piVar7 = (int *)(**(code **)(*DAT_020a1044 + 4))
                            (DAT_020a1044,param_2,(uint)*(byte *)(iVar4 + 6) << 4,0xc);
  bVar1 = *(byte *)(iVar4 + 5);
  if (bVar1 < 0x31) {
    if (bVar1 < 0x30) {
      if (bVar1 < 0x12) {
        if ((0xf < bVar1) && (bVar1 == 0x10 || bVar1 == 0x11)) {
          (**(code **)(*param_2 + 0x24))(param_2,iVar5 + (uint)*(byte *)(iVar4 + 6) * 0x20 + 0xc);
          if (*(char *)(iVar4 + 5) == '\x10') {
            unaff_r9 = (int *)FUN_0201a228(0x24);
            if (unaff_r9 != (int *)0x0) {
              ::jus_Class_02096f04::jus_Class_02096f04
                        (unaff_r9,*(undefined2 *)(iVar4 + 8),*(undefined2 *)(iVar4 + 10),param_2,
                         piVar7);
              *unaff_r9 = (int)&jus_TagNCG1::vftable;
            }
          }
          else if ((*(char *)(iVar4 + 5) == '\x11') &&
                  (unaff_r9 = (int *)FUN_0201a228(0x24), unaff_r9 != (int *)0x0)) {
            ::jus_Class_02096f04::jus_Class_02096f04
                      (unaff_r9,*(undefined2 *)(iVar4 + 8),*(undefined2 *)(iVar4 + 10),param_2,
                       piVar7);
            *unaff_r9 = (int)&jus_TagNG18::vftable;
          }
        }
      }
      else if (bVar1 == 0x20) {
        (**(code **)(*param_2 + 0x24))(param_2,iVar5 + (uint)*(byte *)(iVar4 + 6) * 0x20 + 0xc);
        iVar2 = FUN_0201a228(0x24);
        unaff_r9 = (int *)0x0;
        if (iVar2 != 0) {
          unaff_r9 = (int *)jus_TagPL4R::jus_TagPL4R
                                      (iVar2,*(undefined2 *)(iVar4 + 8),*(undefined2 *)(iVar4 + 10),
                                       param_2,piVar7);
        }
      }
    }
    else {
      (**(code **)(*param_2 + 0x24))(param_2,iVar5 + (uint)*(byte *)(iVar4 + 6) * 0x20 + 0xc);
      unaff_r9 = (int *)FUN_0201a228(0x24);
      if (unaff_r9 != (int *)0x0) {
        ::jus_Class_02096f04::jus_Class_02096f04
                  (unaff_r9,*(undefined2 *)(iVar4 + 8),*(undefined2 *)(iVar4 + 10),param_2,piVar7);
        *unaff_r9 = (int)&jus_TagNFC4::vftable;
      }
    }
  }
  else if (bVar1 < 0x41) {
    if (bVar1 == 0x40) {
      if (*(char *)(iVar4 + 4) == '\x01') {
        (**(code **)(*param_2 + 0x24))(param_2,iVar5 + (uint)*(byte *)(iVar4 + 6) * 0x20 + 0xc);
      }
      else {
        (**(code **)(*param_2 + 0x24))(param_2,iVar5 + (uint)*(byte *)(iVar4 + 6) * 0x20 + 0x10);
        iVar9 = *(int *)(iVar2 + iVar3 + (uint)*(byte *)(iVar4 + 6) * 0x20 + 0xc);
      }
      iVar8 = FUN_0201a228(0x78);
      unaff_r9 = (int *)0x0;
      if (iVar8 != 0) {
        unaff_r9 = (int *)jus_TagFFL4::jus_TagFFL4
                                    (iVar8,*(undefined2 *)(iVar4 + 8),*(undefined2 *)(iVar4 + 10),
                                     param_2,(uint)*(byte *)(iVar4 + 6) << 4);
      }
      if (iVar9 != 0) {
        unaff_r9[9] = iVar9;
      }
      uVar6 = (**(code **)(*unaff_r9 + 100))();
      FUN_02029c68(uVar6,iVar2 + iVar3 + 0xc,0,(uint)*(byte *)(iVar4 + 6) << 4);
    }
  }
  else if (bVar1 == 0x50) {
    (**(code **)(*param_2 + 0x24))(param_2,iVar5 + (uint)*(byte *)(iVar4 + 6) * 0x20 + 0xc);
    unaff_r9 = (int *)FUN_0201a228(0x24);
    if (unaff_r9 != (int *)0x0) {
      ::jus_Class_02096f04::jus_Class_02096f04
                (unaff_r9,*(undefined2 *)(iVar4 + 8),*(undefined2 *)(iVar4 + 10),param_2,piVar7);
      *unaff_r9 = (int)&jus_TagLCP4::vftable;
    }
  }
  (**(code **)(*piVar7 + 0xc))();
  (**(code **)(*param_2 + 0x24))(param_2,iVar5);
  return unaff_r9;
}

