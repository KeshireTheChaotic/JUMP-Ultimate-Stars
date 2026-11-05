
void FUN_0216f100(int param_1,int param_2,int param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  bool bVar5;
  
  FUN_0216e820(*(undefined4 *)(param_1 + 0x2c),param_2,*(undefined4 *)(param_1 + 0x28),param_4,
               param_4);
  FUN_02166a1c(param_1 + 0x34,*(int *)(*(int *)(param_2 + 0x10) + 0x5c) + 0xc);
  if ((*(uint *)(param_2 + 0x2c) & 1) == 0) {
    *(int *)(param_1 + 0x30) = param_2;
  }
  FUN_0216e898(*(undefined1 *)(param_3 + 0x24),*(undefined1 *)(param_3 + 0x1c),param_1 + 0x3c,
               param_1 + 0x3e);
  if ((*(uint *)(param_3 + 0x20) & 0x20) == 0) {
    *(undefined4 *)(param_1 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x44) = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(*(int *)(param_1 + 8) + 0x10);
    *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(*(int *)(param_1 + 8) + 0x14);
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  FUN_0216eb8c(*(undefined4 *)(param_1 + 0x2c),*(undefined4 *)(param_3 + 0x14));
  if ((*(uint *)(param_3 + 0x20) & 2) == 0) {
    *(undefined4 *)(param_1 + 0x48) = 0;
  }
  else {
    uVar1 = FUN_0216ece4(*(undefined4 *)(param_1 + 0x2c),*(undefined4 *)(param_3 + 0x18),
                         *(undefined1 *)(param_3 + 0x1c));
    *(undefined4 *)(param_1 + 0x48) = uVar1;
    *(undefined1 *)(param_1 + 0x4c) = *(undefined1 *)(*(int *)(param_1 + 8) + 0x1d);
  }
  bVar5 = *(char *)(param_3 + 0x1c) != '\0';
  iVar2 = 0;
  if (bVar5) {
    iVar2 = *(int *)(param_3 + 0xc);
  }
  if (bVar5) {
    param_2 = *(int *)(param_3 + 4) + iVar2;
  }
  else {
    iVar2 = *(int *)(param_3 + 0xc);
  }
  iVar4 = *(int *)(param_3 + 8) - *(int *)(param_3 + 0x10);
  if (!bVar5) {
    param_2 = *(int *)(param_3 + 4) - iVar2;
  }
  iVar2 = *(int *)(param_1 + 0x2c);
  uVar3 = *(uint *)(*(int *)(iVar2 + 0x10) + 0x38);
  if ((uVar3 & 0x10) == 0) {
    if ((((uVar3 & 8) == 0) && ((*(uint *)(param_3 + 0x20) & 0x800) == 0)) &&
       ((*(uint *)(param_3 + 0x20) & 0x1000) == 0)) {
      FUN_0216f338(iVar2,1);
      iVar2 = *(int *)(*(int *)(param_1 + 0x2c) + 0x10);
      *(uint *)(iVar2 + 0x78) = *(uint *)(iVar2 + 0x78) | 0x100000;
    }
    else {
      FUN_0216f338(iVar2,0);
      FUN_0207d11c(*(undefined4 *)(*(int *)(param_1 + 0x2c) + 0x10),1);
      FUN_0216f354(*(undefined4 *)(param_1 + 0x2c),param_2,iVar4);
      FUN_0216f368(*(undefined4 *)(param_1 + 0x2c),param_2,iVar4);
      FUN_0216f354(*(undefined4 *)(param_1 + 0x2c),*(undefined4 *)(param_3 + 4),
                   *(undefined4 *)(param_3 + 8));
    }
    FUN_0207cfe0(*(undefined4 *)(*(int *)(param_1 + 0x2c) + 0x10),0x800);
  }
  else {
    FUN_0216f354(iVar2,param_2,iVar4);
    FUN_0216f368(*(undefined4 *)(param_1 + 0x2c),param_2,iVar4);
    FUN_0216f354(*(undefined4 *)(param_1 + 0x2c),*(undefined4 *)(param_3 + 4),
                 *(undefined4 *)(param_3 + 8));
  }
  *(short *)(*(int *)(*(int *)(*(int *)(param_1 + 0x2c) + 0x10) + 0x5c) + 0x24) =
       (short)((uint)*(ushort *)(param_1 + 0x20) * (int)*(short *)(param_1 + 0x3c) >> 8);
  uVar3 = (uint)*(ushort *)(param_1 + 0x20);
  *(short *)(*(int *)(*(int *)(*(int *)(param_1 + 0x2c) + 0x10) + 0x5c) + 0x26) =
       (short)(uVar3 * (int)*(short *)(param_1 + 0x3e) >> 8);
  bVar5 = (*(uint *)(param_3 + 0x20) & 4) == 0;
  if (bVar5) {
    uVar3 = 1;
  }
  if (!bVar5) {
    uVar3 = 0;
  }
  FUN_0216ec88(*(undefined4 *)(param_1 + 0x2c),param_1,uVar3,0,
               (*(uint *)(*(int *)(param_1 + 8) + 8) & 0x100) != 0);
  return;
}

