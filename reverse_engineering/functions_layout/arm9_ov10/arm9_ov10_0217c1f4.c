
undefined4 FUN_0217c1f4(int param_1,undefined4 param_2,undefined4 param_3)

{
  ushort uVar1;
  bool bVar2;
  undefined2 uVar3;
  ushort uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  undefined4 local_28;
  undefined4 local_20;
  undefined4 local_1c;
  
  iVar5 = FUN_02178448();
  uVar9 = (uint)*(byte *)(iVar5 + 0x14);
  local_28 = 0;
  if (param_1 != 0) {
    iVar5 = FUN_02178448();
    *(undefined1 *)(iVar5 + 0x18c) = 1;
    iVar5 = FUN_02178448();
    *(undefined1 *)(iVar5 + 0x18d) = 0;
    iVar5 = FUN_02178448();
    *(undefined2 *)(iVar5 + 0x18e) = 0;
    iVar5 = FUN_02178448();
    *(undefined4 *)(iVar5 + 400) = 0;
    iVar5 = FUN_02178448();
    *(undefined4 *)(iVar5 + 0x194) = param_2;
    bVar2 = true;
    goto LAB_0217c3c2;
  }
  iVar5 = FUN_02178448();
  iVar6 = FUN_02178448();
  uVar10 = *(uint *)(iVar5 + 0x1f8);
  uVar1 = *(ushort *)(iVar6 + 0x176);
  iVar5 = FUN_0217f9f4(param_3);
  if (iVar5 == 0) {
    uVar4 = FUN_021938c0();
    if (uVar4 != 0xa8c0) {
      if ((uVar4 & 0xff) == 0xac) {
        if ((0xfff < (uVar4 & 0xff00)) && ((uVar4 & 0xff00) < 0x1f01)) goto LAB_0217c2ac;
      }
      if ((uVar4 & 0xff) != 0x10) {
        iVar5 = FUN_02178448();
        uVar8 = FUN_0217fa28(param_3);
        *(undefined4 *)(iVar5 + uVar9 * 4 + 0x208) = uVar8;
        iVar5 = FUN_02178448();
        uVar3 = FUN_0217fa0c(param_3);
        *(undefined2 *)(iVar5 + uVar9 * 2 + 0x288) = uVar3;
        bVar2 = false;
        goto LAB_0217c2da;
      }
    }
LAB_0217c2ac:
    bVar2 = true;
  }
  else {
    iVar5 = FUN_0217fa28(param_3);
    iVar6 = FUN_02178448();
    iVar6 = FUN_0217fbdc(*(undefined4 *)(iVar6 + 0xe4));
    if (iVar5 == iVar6) {
      iVar5 = FUN_02178448();
      uVar8 = FUN_0217f9f0(param_3);
      *(undefined4 *)(iVar5 + uVar9 * 4 + 0x208) = uVar8;
      iVar5 = FUN_02178448();
      uVar3 = FUN_0217f9d4(param_3);
      *(undefined2 *)(iVar5 + uVar9 * 2 + 0x288) = uVar3;
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
  }
LAB_0217c2da:
  if (bVar2) {
    iVar5 = FUN_02178448();
    uVar3 = FUN_02175ba8(0x10000);
    *(undefined2 *)(iVar5 + 0x176) = uVar3;
    iVar5 = FUN_02178448();
    *(uint *)(iVar5 + 0x194) = uVar10 & 0xffff | (uint)uVar1 << 0x10;
  }
  else {
    local_20 = FUN_021938c0();
    iVar5 = FUN_02178448();
    local_1c = FUN_0218a864(**(undefined4 **)(iVar5 + 4));
    iVar5 = FUN_02178448();
    uVar8 = FUN_0217fa28(param_3);
    uVar7 = FUN_0217fa0c(param_3);
    iVar5 = FUN_0217c024(6,*(undefined4 *)(iVar5 + uVar9 * 4 + 0xf4),uVar8,uVar7,&local_20,2);
    iVar6 = FUN_02178448();
    *(undefined1 *)(iVar6 + 0x3c5) = 0;
    if (iVar5 != 0) {
      return 2;
    }
    iVar5 = FUN_02178448();
    *(undefined4 *)(iVar5 + 0x194) = 0;
  }
  iVar5 = FUN_02178448();
  *(undefined1 *)(iVar5 + 0x18c) = 0;
  iVar5 = FUN_02178448();
  *(undefined1 *)(iVar5 + 0x18d) = 0;
  iVar5 = FUN_02178448();
  uVar3 = FUN_0217fa0c(param_3);
  *(undefined2 *)(iVar5 + 0x18e) = uVar3;
  iVar5 = FUN_02178448();
  uVar8 = FUN_0217fa28(param_3);
  *(undefined4 *)(iVar5 + 400) = uVar8;
LAB_0217c3c2:
  if (bVar2) {
    iVar5 = FUN_02178448();
    local_28 = FUN_0217c180(iVar5 + 0x18c);
  }
  else {
    iVar5 = FUN_02178448();
    uVar8 = FUN_0218a858(**(undefined4 **)(iVar5 + 4));
    iVar5 = FUN_02178448();
    FUN_021784b8(0,uVar8,0,iVar5 + 0x18c);
    iVar5 = FUN_02178448();
    *(undefined4 *)(iVar5 + 0x184) = 0;
    *(undefined4 *)(iVar5 + 0x188) = 0;
  }
  return local_28;
}

