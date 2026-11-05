
undefined4 FUN_0202771c(int *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  
  if ((short)param_1[1] != 1) {
    uVar2 = FUN_0201c8a0();
    return uVar2;
  }
  piVar1 = (int *)FUN_0201b45c();
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x30))();
  }
  (**(code **)(*param_1 + 0x68))();
  if ((*(byte *)((int)param_1 + 0x29) & 1) == 0) {
    uVar2 = FUN_0201c8a0();
    return uVar2;
  }
  (**(code **)(*param_1 + 0x50))(param_1,0);
  *(byte *)((int)param_1 + 0x29) = *(byte *)((int)param_1 + 0x29) & 0xfe;
  return 0;
}

