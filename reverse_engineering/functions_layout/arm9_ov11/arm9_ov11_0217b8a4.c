
bool FUN_0217b8a4(int param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  
  if (0xf < param_3) {
    param_3 = 0xf;
  }
  uVar2 = 0;
  for (uVar1 = 0; uVar1 < param_3; uVar1 = uVar1 + 1) {
    uVar2 = uVar2 | *(uint *)(param_1 + ((*(int *)(param_1 + 0x130) - param_3 & 0xf) + uVar1 & 0xf)
                                        * 4 + 0xec);
  }
  return (uVar2 & param_2) != 0;
}

