
int FUN_021929c4(int param_1,int param_2,int param_3,int param_4,undefined2 param_5,int param_6,
                uint param_7)

{
  undefined2 uVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int local_1c;
  
  iVar7 = *(int *)(param_1 + 0x68);
  iVar3 = FUN_02191978(0x21928e5,*(undefined4 *)(iVar7 + 0x10c),param_7);
  if (iVar3 == 0) {
    return -0x21;
  }
  if (((param_7 & 1) == 0) || (*(char *)(param_1 + 0x73) == '\x01')) {
    *(undefined1 *)(iVar3 + 0xd) = 0;
  }
  else {
    *(undefined1 *)(iVar3 + 0xd) = 3;
  }
  iVar6 = *(int *)(iVar7 + 0xfc);
  iVar5 = *(int *)(iVar7 + 0xf8);
  iVar4 = param_4 + param_3;
  if (iVar4 < iVar5) {
    *(int *)(iVar3 + 0x10) = iVar6 + param_4;
    *(int *)(iVar3 + 0x14) = param_3;
    *(undefined4 *)(iVar3 + 0x18) = 0;
    *(undefined4 *)(iVar3 + 0x1c) = 0;
  }
  else {
    *(int *)(iVar3 + 0x10) = iVar6 + param_4;
    *(int *)(iVar3 + 0x14) = iVar5 - param_4;
    *(int *)(iVar3 + 0x18) = iVar6;
    *(int *)(iVar3 + 0x1c) = param_3 - *(int *)(iVar3 + 0x14);
    iVar4 = *(int *)(iVar3 + 0x1c);
    FUN_02051890(param_2 + *(int *)(iVar3 + 0x14),*(undefined4 *)(iVar3 + 0x18),iVar4);
  }
  FUN_02051890(param_2,*(undefined4 *)(iVar3 + 0x10),*(undefined4 *)(iVar3 + 0x14));
  uVar1 = *(undefined2 *)(iVar7 + 0x100);
  *(short *)(iVar3 + 0x20) = (short)iVar4;
  *(undefined2 *)(iVar7 + 0x100) = *(undefined2 *)(iVar3 + 0x20);
  if (*(char *)(param_1 + 0x73) == '\x01') {
    if (*(short *)(param_1 + 0x74) == 0) {
      uVar2 = FUN_0218f448();
      *(undefined2 *)(param_1 + 0x74) = uVar2;
      *(undefined2 *)(param_1 + 10) = *(undefined2 *)(param_1 + 0x74);
    }
    *(undefined2 *)(iVar3 + 0x24) = *(undefined2 *)(param_1 + 0x74);
    if ((*(int *)(param_1 + 0x78) == 0) || (param_6 != 0)) {
      *(int *)(iVar3 + 0x28) = param_6;
      *(undefined2 *)(iVar3 + 0x26) = param_5;
    }
    else {
      *(int *)(iVar3 + 0x28) = *(int *)(param_1 + 0x78);
      *(undefined2 *)(iVar3 + 0x26) = *(undefined2 *)(param_1 + 0x76);
    }
  }
  else {
    *(undefined4 *)(iVar3 + 0x28) = 0;
  }
  iVar3 = FUN_02191894(*(undefined4 *)(iVar7 + 0x10c),iVar3);
  local_1c = param_3;
  if (iVar3 != 0) {
    *(undefined2 *)(iVar7 + 0x100) = uVar1;
    local_1c = 0;
  }
  return local_1c;
}

