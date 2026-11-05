
uint * FUN_021c6408(uint *param_1,uint *param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined1 uStack_24;
  undefined1 uStack_23;
  undefined1 uStack_22;
  undefined1 uStack_21;
  undefined1 auStack_20 [4];
  uint local_1c;
  undefined4 uStack_18;
  
  if (param_1 != param_2) {
    uVar4 = *param_2;
    iVar2 = uVar4 + param_2[1] * 8;
    uStack_18 = param_4;
    FUN_0200f69c(&uStack_24,1);
    uVar5 = (int)((iVar2 - uVar4) + ((uint)((int)(iVar2 - uVar4) >> 2) >> 0x1d)) >> 3;
    local_1c = uVar5;
    uVar6 = param_1[2];
    if (uVar6 < uVar5) {
      FUN_0200f69c(auStack_20,1);
      uVar5 = FUN_021c776c(param_1,uVar5 - uVar6);
      uVar6 = param_1[1];
      FUN_0200f69c(&uStack_23,1);
      param_1[1] = param_1[1] - uVar6;
      if (*param_1 != 0) {
        FUN_0201b244();
        *param_1 = 0;
        param_1[2] = 0;
      }
      FUN_0200f69c(&uStack_22,1);
      if (0x1fffffff < uVar5) {
        FUN_02003bd8(s_vector_length_error_021d48b8);
        FUN_02001f18();
      }
      uVar6 = FUN_021c7880(param_1 + 2,uVar5,0);
      *param_1 = uVar6;
      param_1[2] = uVar5;
      FUN_021c6504(param_1,uVar4,iVar2);
    }
    else {
      if (param_1[1] < uVar5) {
        puVar3 = param_1 + 1;
      }
      else {
        puVar3 = &local_1c;
      }
      uVar5 = *param_1;
      uVar6 = uVar4 + *puVar3 * 8;
      for (; uVar1 = local_1c, uVar4 < uVar6; uVar4 = uVar4 + 8) {
        FUN_021c6544(uVar5,uVar4);
        uVar5 = uVar5 + 8;
      }
      uVar4 = param_1[1];
      if (local_1c < uVar4) {
        FUN_0200f69c(&uStack_21,1);
        param_1[1] = param_1[1] - (uVar4 - uVar1);
      }
      else if (uVar4 < local_1c) {
        FUN_021c6504(param_1,uVar6,iVar2);
      }
    }
  }
  return param_1;
}

