
void FUN_0207c414(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  
  if (*(int *)(param_2 + 100) == param_1) {
    *(undefined4 *)(param_2 + 100) = 0;
    return;
  }
  puVar2 = *(undefined4 **)(param_2 + 0x28);
  while( true ) {
    if (puVar2 == (undefined4 *)0x0) {
      return;
    }
    if (param_1 == puVar2[2]) break;
    puVar2 = (undefined4 *)*puVar2;
  }
  FUN_02037c24(param_2 + 0x28,puVar2,puVar2[2],param_4,param_4);
  piVar3 = *(int **)(*(int *)(*(int *)(DAT_0214be0c + 0x28) + 4) + 0x44);
  if (piVar3 == (int *)0x0) {
    iVar1 = 0;
  }
  else {
    if (piVar3[6] == 0) {
      (**(code **)(*piVar3 + 0x14))();
    }
    iVar1 = piVar3[6];
  }
  iVar1 = *(int *)(*(int *)(iVar1 + 4) + 0x10);
  puVar2[2] = 0;
  FUN_02037b98(iVar1 + 0xd8,puVar2);
  return;
}

