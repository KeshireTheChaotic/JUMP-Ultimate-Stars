
uint FUN_0214e6d0(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = param_1 & param_2;
  uVar1 = uVar2 | (param_1 & ~param_2) + 1;
  if ((uVar2 | ~param_2) <= uVar1) {
    uVar1 = uVar2 | 1;
  }
  return uVar1;
}

