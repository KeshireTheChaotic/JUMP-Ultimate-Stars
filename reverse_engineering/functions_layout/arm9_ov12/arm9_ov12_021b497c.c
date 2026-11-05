
int * FUN_021b497c(int *param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined1 uStack_1c;
  undefined1 auStack_1b [3];
  undefined4 uStack_18;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  iVar4 = *param_2;
  iVar1 = iVar4 + param_2[1] * 4;
  iVar3 = iVar1 - iVar4;
  uVar5 = (int)(iVar3 + ((uint)(iVar3 >> 1) >> 0x1e)) >> 2;
  if (uVar5 != 0) {
    uStack_18 = param_4;
    FUN_0200f69c(&uStack_1c,1);
    if (0x3fffffff < uVar5) {
      FUN_02003bd8(s_vector_length_error_021d3dd4);
      FUN_02001f18();
    }
    iVar2 = FUN_021ba304(param_1 + 2,uVar5,0);
    *param_1 = iVar2;
    param_1[2] = uVar5;
    FUN_0200f69c(auStack_1b,1);
    iVar1 = iVar1 - iVar4;
    FUN_02002450(*param_1 + param_1[1] * 4,iVar4,
                 ((int)(iVar1 + ((uint)(iVar1 >> 1) >> 0x1e)) >> 2) << 2);
    param_1[1] = param_1[1] + ((int)(iVar3 + ((uint)(iVar3 >> 1) >> 0x1e)) >> 2);
  }
  return param_1;
}

