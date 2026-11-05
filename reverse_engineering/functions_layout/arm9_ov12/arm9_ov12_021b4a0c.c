
int * FUN_021b4a0c(int *param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined1 uStack_1c;
  undefined1 auStack_1b [3];
  undefined4 uStack_18;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  iVar2 = *param_2;
  iVar4 = iVar2 + param_2[1] * 8;
  iVar1 = iVar4 - iVar2;
  uVar3 = (int)(iVar1 + ((uint)(iVar1 >> 2) >> 0x1d)) >> 3;
  if (uVar3 != 0) {
    uStack_18 = param_4;
    FUN_0200f69c(auStack_1b,1);
    if (0x1fffffff < uVar3) {
      FUN_02003bd8(s_vector_length_error_021d3dd4);
      FUN_02001f18();
    }
    iVar1 = FUN_021ba2ac(param_1 + 2,uVar3,0);
    *param_1 = iVar1;
    param_1[2] = uVar3;
    FUN_0200f69c(&uStack_1c,1);
    iVar1 = *param_1 + param_1[1] * 8;
    for (; iVar2 != iVar4; iVar2 = iVar2 + 8) {
      FUN_021b9cc8(param_1 + 2,iVar1,iVar2);
      iVar1 = iVar1 + 8;
      param_1[1] = param_1[1] + 1;
    }
  }
  return param_1;
}

