
undefined4 FUN_0206a6e8(int param_1)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  int local_28;
  int local_24 [4];
  
  FUN_020517fc(param_1,0,0x700);
  iVar2 = FUN_0206a42c(param_1);
  if (iVar2 == 0) {
    return 0xffffd8ef;
  }
  FUN_02050fcc(param_1 + 0x500,0xa001);
  iVar2 = FUN_0206a404(param_1);
  if (iVar2 == 0) {
    return 0xffffd8ef;
  }
  FUN_020517fc(local_24,0,0x10);
  local_28 = 0;
  piVar6 = local_24;
  iVar2 = param_1;
  iVar7 = param_1;
  do {
    uVar3 = FUN_02050e94(param_1 + 0x500,iVar2,0xfe);
    if ((uVar3 == *(ushort *)(iVar2 + 0xfe)) && (iVar4 = FUN_0206a634(iVar7), iVar4 != 0)) {
      *piVar6 = 1;
    }
    iVar2 = iVar2 + 0x100;
    iVar7 = iVar7 + 0x100;
    piVar6 = piVar6 + 1;
    local_28 = local_28 + 1;
  } while (local_28 < 3);
  uVar3 = FUN_02050e94(param_1 + 0x500,param_1 + 0x300,0xfe);
  if (uVar3 == *(ushort *)(param_1 + 0x3fe)) {
    local_24[3] = 1;
  }
  if ((((local_24[0] != 0) && (local_24[1] != 0)) && (local_24[2] != 0)) && (local_24[3] != 0)) {
    FUN_0206a318(param_1 + 0xf0);
    return 0;
  }
  if (((local_24[0] == 0) && (local_24[1] == 0)) && ((local_24[2] == 0 && (local_24[3] == 0)))) {
    FUN_0206a5d8(param_1);
    iVar2 = FUN_0206a328(param_1);
    if (iVar2 == 0) {
      return 0xffffd8f0;
    }
    return 0;
  }
  if (((local_24[0] == 0) || (local_24[1] == 0)) && ((local_24[2] == 0 || (local_24[3] == 0)))) {
    FUN_0206a5d8(param_1);
    iVar2 = FUN_0206a328(param_1);
    if (iVar2 == 0) {
      return 0xffffd8f0;
    }
    return 0;
  }
  if ((local_24[0] == 0) && (local_24[1] == 0)) {
    FUN_0206a5d8(param_1);
    iVar2 = FUN_0206a328(param_1);
    if (iVar2 == 0) {
      return 0xffffd8f0;
    }
    return 0xffffd8ed;
  }
  if (local_24[0] == 0) {
    FUN_0206a5b4(param_1,0);
    FUN_02051890(param_1 + 0x1f0,param_1 + 0xf0,0xe);
    *(undefined1 *)(param_1 + 0xef) = *(undefined1 *)(param_1 + 0x1ef);
  }
  else if (local_24[1] == 0) {
    FUN_0206a5b4(param_1,1);
    FUN_02051890(param_1 + 0xf0,param_1 + 0x1f0,0xe);
    *(undefined1 *)(param_1 + 0x1ef) = *(undefined1 *)(param_1 + 0xef);
  }
  FUN_0206a318(param_1 + 0xf0);
  if (local_24[2] == 0) {
    FUN_0206a5b4(param_1,2);
  }
  if (local_24[3] == 0) {
    MIi_CpuClear16(0,param_1 + 0x300,0x100);
  }
  bVar1 = false;
  uVar3 = 0;
  piVar6 = local_24;
  do {
    if ((*piVar6 == 0) && (uVar5 = 1 << (uVar3 & 0xff), (*(byte *)(param_1 + 0xef) & uVar5) != 0)) {
      *(byte *)(param_1 + 0xef) = *(byte *)(param_1 + 0xef) & ~(byte)uVar5;
      *(undefined1 *)(param_1 + 0x1ef) = *(undefined1 *)(param_1 + 0xef);
      bVar1 = true;
    }
    piVar6 = piVar6 + 1;
    uVar3 = uVar3 + 1;
  } while ((int)uVar3 < 3);
  iVar2 = FUN_0206a328(param_1);
  if (iVar2 == 0) {
    return 0xffffd8f0;
  }
  if (bVar1) {
    return 0xffffd8ee;
  }
  return 0;
}

