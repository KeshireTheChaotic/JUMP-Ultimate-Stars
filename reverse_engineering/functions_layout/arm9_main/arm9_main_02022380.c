
void FUN_02022380(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  
  (**(code **)(*param_1 + 0xd8))(param_1,0,*(code **)(*param_1 + 0xd8),param_4,param_4);
  FUN_020279d0(param_1);
  puVar2 = (undefined4 *)param_1[7];
  while (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + -8;
    puVar2 = (undefined4 *)*puVar2;
    (**(code **)(*piVar1 + 0x70))();
  }
  for (puVar2 = (undefined4 *)param_1[0x17]; puVar2 != (undefined4 *)0x0;
      puVar2 = (undefined4 *)*puVar2) {
    func_0x021b0ba0(puVar2 + -0x12,0);
  }
  return;
}

