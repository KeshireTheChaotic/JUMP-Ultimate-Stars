
void FUN_02156ddc(int param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  iVar4 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  FUN_02161134(iVar4 + 0x1c);
  iVar3 = *(int *)(iVar4 + 0x1a4);
  if ((iVar3 != 0) && (*(int *)(iVar3 + 0x2c) != -1)) {
    *(int *)(iVar3 + 0x2c) = *(int *)(iVar3 + 0x2c) + 1;
  }
  bVar6 = *(char *)(iVar4 + 0x77) != '\0';
  if (bVar6) {
    iVar3 = *(int *)(iVar4 + 0x1a4);
  }
  if ((bVar6 && iVar3 != 0) && (*(short *)(iVar3 + 0xa8) != -1)) {
    *(short *)(iVar3 + 0xa8) = *(short *)(iVar3 + 0xa8) + 1;
  }
  if (*(char *)(iVar4 + 0x18) != '\x1b') {
    uVar1 = *(undefined1 *)(iVar4 + 0x75);
    uVar2 = *(undefined1 *)(iVar4 + 0x74);
    iVar3 = *(int *)(iVar4 + 0x1b4);
    *(undefined1 *)(iVar3 + 0x5f3) = *(undefined1 *)(iVar4 + 0x76);
    *(undefined1 *)(iVar3 + 0x5f5) = uVar2;
    *(undefined1 *)(iVar3 + 0x5f6) = uVar1;
    if ((*(uint *)(iVar4 + 0x6c) & 0x4000) == 0) {
      if ((*(uint *)(iVar4 + 0x6c) & 0x8000) != 0) {
        FUN_02077bb4(*(undefined4 *)(iVar4 + 0x1b4),2);
      }
    }
    else {
      FUN_02077bb4(*(undefined4 *)(iVar4 + 0x1b4),1);
    }
    FUN_02158b20(iVar4);
    FUN_0215c278(iVar4);
    FUN_0215c360(iVar4);
    FUN_0215a978(iVar4,0);
    FUN_0215ef24(iVar4);
  }
  FUN_02159cc4(iVar4);
  *(undefined1 *)(iVar4 + 0xd1) = 0;
  *(undefined1 *)(iVar4 + 0xd4) = 0;
  iVar3 = *(int *)(*(int *)(iVar4 + 0x1b4) + 0x56c);
  iVar5 = (int)*(short *)(iVar3 + 0x16);
  iVar3 = (int)*(short *)(iVar3 + 0x18);
  FUN_0215f0fc(*(undefined4 *)(iVar4 + 0x1a0),iVar5,iVar3);
  *(int *)(*(int *)(*(int *)(iVar4 + 0x1a8) + 0x10) + 0x178) = iVar5;
  *(int *)(*(int *)(*(int *)(iVar4 + 0x1a8) + 0x10) + 0x17c) = iVar3;
  *(short *)(*(int *)(*(int *)(iVar4 + 0x1a8) + 0x10) + 0x176) =
       *(char *)(*(int *)(iVar4 + 0x1b4) + 0x5cd) * 100 +
       (short)((uint)*(undefined4 *)(*(int *)(iVar4 + 0x1b4) + 0x5c8) >> 8);
  FUN_021607fc(iVar4,*(undefined4 *)(iVar4 + 0x1a4));
  return;
}

