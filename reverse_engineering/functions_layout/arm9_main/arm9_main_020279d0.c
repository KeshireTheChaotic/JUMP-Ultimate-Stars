
void FUN_020279d0(int *param_1)

{
  undefined4 uVar1;
  
  (**(code **)(*param_1 + 0x5c))();
  if ((*(uint *)(param_1[0xc] + 8) & 3) >> 1 == 0) {
    return;
  }
  uVar1 = FUN_0201b45c(param_1);
  (**(code **)(*(int *)param_1[0xc] + 0x20))((int *)param_1[0xc],uVar1);
  return;
}

