
int * FUN_021b3c4c(int *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 uStack_18;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  puVar4 = (undefined4 *)*param_2;
  puVar6 = puVar4 + param_2[1] * 2;
  iVar2 = (int)puVar6 - (int)puVar4;
  uVar5 = (int)(iVar2 + ((uint)(iVar2 >> 2) >> 0x1d)) >> 3;
  if (uVar5 != 0) {
    uStack_18 = param_4;
    FUN_0200f69c((int)&uStack_18 + 1,1);
    if (0x1fffffff < uVar5) {
      FUN_02003bd8(s_vector_length_error_021d3dd4);
      FUN_02001f18();
    }
    iVar2 = FUN_021ba2d8(param_1 + 2,uVar5,0);
    *param_1 = iVar2;
    param_1[2] = uVar5;
    FUN_0200f69c(&uStack_18,1);
    puVar3 = (undefined4 *)(*param_1 + param_1[1] * 8);
    for (; puVar4 != puVar6; puVar4 = puVar4 + 2) {
      if (puVar3 != (undefined4 *)0x0) {
        uVar1 = puVar4[1];
        *puVar3 = *puVar4;
        puVar3[1] = uVar1;
      }
      puVar3 = puVar3 + 2;
      param_1[1] = param_1[1] + 1;
    }
  }
  return param_1;
}

