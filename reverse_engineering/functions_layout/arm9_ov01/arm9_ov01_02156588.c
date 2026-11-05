
void FUN_02156588(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar1 = *(int *)(*(int *)(param_1 + 4) + 0x124);
  iVar2 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  if (((iVar1 < 3) || ((DAT_020b0b90 & 0x40) != 0)) &&
     (uVar3 = *(uint *)(iVar2 + 0xec), (uVar3 & 2) != 0)) {
    iVar4 = iVar1 * 2 + 0xd;
    if (*(int *)(iVar2 + 0xf8) == iVar1) {
      FUN_0207342c(0x78,3,2,uVar3,param_4);
      iVar4 = iVar1 * 2 + 0xe;
    }
    iVar1 = FUN_021519b4(param_1,1);
    FUN_02023894(*(undefined4 *)(iVar1 + 4),iVar4 + 0x851000,0);
    (**(code **)(**(int **)(*(int *)(iVar1 + 4) + 0x68) + 0x6c))();
  }
  return;
}

