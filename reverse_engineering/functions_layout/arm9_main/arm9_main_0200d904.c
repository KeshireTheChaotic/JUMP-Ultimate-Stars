
undefined4 FUN_0200d904(undefined4 param_1,int param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = *param_3;
  uVar1 = 0;
  if (uVar2 != 0) {
    do {
      FUN_0200d87c(param_2 + uVar1);
      uVar1 = uVar1 + 1;
    } while (uVar1 < uVar2);
  }
  return 0;
}

