
void FUN_02151474(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  
  uVar3 = *(undefined4 *)(param_1 + 0xc);
  FUN_0214f960(uVar3,&DAT_0215c158,param_3,param_4,param_4);
  iVar1 = FUN_02151454(uVar3,0x564d5049,0);
  FUN_02013c48(*(undefined4 *)(iVar1 + 4),&DAT_0215c164,0);
  piVar2 = *(int **)(*(int *)(param_1 + 0x10) + 4);
  (**(code **)(*piVar2 + 0xd8))(piVar2,0);
  piVar2 = *(int **)(*(int *)(param_1 + 0x18) + 4);
  (**(code **)(*piVar2 + 0xd8))(piVar2,0);
  piVar2 = *(int **)(*(int *)(param_1 + 0x1c) + 4);
  (**(code **)(*piVar2 + 0xd8))(piVar2,0);
  FUN_02023894(*(undefined4 *)(*(int *)(param_1 + 0x14) + 4),
               (uint)*(byte *)(param_1 + 0x23) * 2 + 0x5000d,0);
  (**(code **)(**(int **)(*(int *)(*(int *)(param_1 + 0x14) + 4) + 0x68) + 0x6c))();
  *(undefined1 *)(param_1 + 0x21) = 0;
  return;
}

