
void FUN_02169b08(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  code *pcVar1;
  int *piVar2;
  
  piVar2 = *(int **)(*(int *)(param_1 + 0xc) + 4);
  (**(code **)(*(int *)piVar2[0x19] + 0x70))();
  (**(code **)(*piVar2 + 0xc4))();
  piVar2 = *(int **)(*(int *)(*(int *)(param_1 + 0xc) + 4) + 100);
  pcVar1 = *(code **)(*piVar2 + 0x6c);
  (*pcVar1)(piVar2,param_1 + 0x3a,0xffffffff,pcVar1,param_4);
  return;
}

