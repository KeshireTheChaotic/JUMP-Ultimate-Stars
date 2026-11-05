
int * FUN_020288e8(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = *param_1;
  piVar1 = param_1;
  if (iVar2 != 0) {
    *(undefined4 *)(iVar2 + 0xdc) = 0;
    piVar1 = (int *)*param_1;
  }
  if (iVar2 != 0 && piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))();
  }
  return param_1;
}

