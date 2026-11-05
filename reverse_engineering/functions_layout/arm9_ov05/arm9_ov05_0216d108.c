
void FUN_0216d108(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined1 local_58;
  undefined1 local_57;
  undefined1 local_56;
  undefined4 uStack_28;
  
  uStack_28 = param_4;
  if (*(int *)(*(int *)(*(int *)(param_1 + 0x30) + 4) + 0x148) != 0) {
    func_0x021ad110();
  }
  uVar1 = FUN_02075670(*(undefined4 *)(param_1 + 4));
  *(undefined4 *)(param_1 + 0x78) = uVar1;
  for (iVar6 = 0; iVar6 < *(int *)(param_1 + 0x78); iVar6 = iVar6 + 1) {
    uVar1 = FUN_0207569c(*(undefined4 *)(param_1 + 4),iVar6);
    iVar2 = FUN_0200d12c(uVar1,10);
    uVar3 = FUN_0207568c(*(undefined4 *)(param_1 + 4),iVar6);
    if ((((uVar3 == 0 || uVar3 == 0x2a) ||
         ((*(uint *)(&DAT_020b0b9c + (uVar3 >> 5) * 4) & 1 << (uVar3 & 0x1f)) != 0)) &&
        ((iVar5 = (int)(char)(&DAT_0216d81c)[param_3], iVar5 < 0 || (iVar5 == iVar2)))) &&
       (((iVar5 != -1 || (uVar3 == 0)) && (iVar5 != -2 || uVar3 != 0)))) {
      iVar2 = (uVar3 + 0x8740) * 0x10000;
      local_56 = 0;
      local_57 = (undefined1)((uint)iVar2 >> 0x10);
      local_58 = (undefined1)((uint)iVar2 >> 0x18);
      uVar1 = FUN_02075678(*(undefined4 *)(param_1 + 4),iVar6);
      thunk_FUN_020741c4(&local_58,uVar1);
      func_0x021ace90(*(undefined4 *)(*(int *)(param_1 + 0x30) + 4),&local_58,iVar6);
    }
  }
  piVar4 = *(int **)(*(int *)(param_1 + 0x30) + 4);
  (**(code **)(*piVar4 + 0x1a0))(piVar4,param_2,0);
  piVar4 = *(int **)(*(int *)(param_1 + 0x30) + 4);
  (**(code **)(*piVar4 + 0x198))(piVar4,param_2);
  return;
}

