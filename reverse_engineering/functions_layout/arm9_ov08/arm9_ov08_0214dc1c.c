
undefined4 FUN_0214dc1c(int param_1,byte *param_2,uint param_3)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  uint unaff_r4;
  byte *unaff_r5;
  int unaff_r6;
  int unaff_r7;
  
code_r0x0214dc1c:
  FUN_0214cf10(param_1,param_2,param_3);
  *(uint *)(unaff_r6 + 4) = unaff_r4;
LAB_0214dc58:
  if (*(short *)(unaff_r5 + 4) == 0) {
    return 0;
  }
  iVar3 = FUN_0214cdc4();
  unaff_r5 = (byte *)(unaff_r7 + 6 + iVar3);
  param_3 = FUN_0214cdc4(*(undefined2 *)(unaff_r5 + 2));
  uVar1 = (uint)*unaff_r5;
  if (uVar1 < 0x22) {
    if (uVar1 < 0x21) {
      if (uVar1 < 0x16) {
        if (-1 < (int)(uVar1 - 0x10)) {
          uVar2 = (*(code *)((int)&switchD_0214db44::switchdataD_0214db46 +
                            (int)(short)(&switchD_0214db44::switchdataD_0214db46)[uVar1 - 0x10]))();
          return uVar2;
        }
      }
      else if (uVar1 == 0x20) goto FUN_0214db7c;
    }
    else {
FUN_0214db7c:
      if (0xd < param_3) {
        return 0xffffffff;
      }
    }
  }
  else if (uVar1 < 0x24) {
    if ((0x22 < uVar1) || (uVar1 == 0x22)) goto FUN_0214db7c;
  }
  else if ((uVar1 == 0x25) && (0x21 < param_3)) {
    return 0xffffffff;
  }
  if (uVar1 < 0x22) {
    if (uVar1 < 0x21) {
      if (uVar1 < 0x16) {
        if ((int)(uVar1 - 0x10) < 0) {
          return 0xffffffff;
        }
        uVar2 = (*(code *)((int)&switchD_0214dbbc::switchdataD_0214dbbe +
                          (int)(short)(&switchD_0214dbbc::switchdataD_0214dbbe)[uVar1 - 0x10]))();
        return uVar2;
      }
      if (uVar1 != 0x20) {
        return 0xffffffff;
      }
      FUN_0214cf10(unaff_r6 + 0x30,unaff_r5 + 6,param_3);
      *(uint *)(unaff_r6 + 4) = param_3;
    }
    else {
      FUN_0214cf10(unaff_r6 + 0x70,unaff_r5 + 6,param_3);
      *(uint *)(unaff_r6 + 4) = param_3;
    }
    goto LAB_0214dc58;
  }
  if (uVar1 < 0x24) {
    if (0x22 < uVar1) goto switchD_0214dbbc_caseD_13;
    if (uVar1 == 0x22) {
      FUN_0214cf10(unaff_r6 + 0xb0,unaff_r5 + 6,param_3);
      *(uint *)(unaff_r6 + 4) = param_3;
      goto LAB_0214dc58;
    }
  }
  else if (uVar1 == 0x25) {
    if ((param_3 != 0) && (unaff_r5[param_3 + 5] != 0)) {
      return 0xffffffff;
    }
    FUN_0214cf10(unaff_r6 + 8,unaff_r5 + 6,param_3);
    goto LAB_0214dc58;
  }
  return 0xffffffff;
switchD_0214dbbc_caseD_13:
  param_1 = unaff_r6 + 0xf0;
  param_2 = unaff_r5 + 6;
  unaff_r4 = param_3;
  goto code_r0x0214dc1c;
}

