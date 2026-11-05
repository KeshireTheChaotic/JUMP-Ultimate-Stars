
void FUN_021b6628(uint *param_1,undefined4 *param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined1 uStack_30;
  undefined1 uStack_2f;
  undefined1 uStack_2e;
  undefined1 uStack_2d;
  undefined1 uStack_2c;
  undefined1 uStack_2b;
  undefined1 auStack_2a [2];
  uint local_28;
  int local_24;
  uint local_20;
  uint *local_1c;
  uint local_18;
  
  FUN_0200f69c(&uStack_30,1);
  uVar1 = param_1[1];
  if (uVar1 < param_1[2]) {
    param_1[1] = uVar1 + 1;
    FUN_021b6754(*param_1 + uVar1 * 8,param_2);
  }
  else {
    FUN_0200f69c(&uStack_2f,1);
    FUN_0200f69c(auStack_2a,1);
    FUN_021b9ff8(param_1,1);
    local_1c = param_1 + 2;
    local_28 = 0;
    local_24 = 0;
    local_20 = 0;
    local_18 = 0;
    uVar1 = FUN_021b9ff8(param_1,(param_1[1] + 1) - param_1[2]);
    FUN_0200f69c(&uStack_2e,1);
    if (0x1fffffff < uVar1) {
      FUN_02003bd8(s_vector_length_error_021d3dd4);
      FUN_02001f18();
    }
    local_28 = FUN_021ba2ac(local_1c,uVar1,0);
    local_18 = param_1[1];
    local_20 = uVar1;
    FUN_0200f69c(&uStack_2d,1);
    iVar2 = local_28 + local_18 * 8;
    *(undefined4 *)(iVar2 + local_24 * 8) = *param_2;
    *(undefined4 *)(iVar2 + local_24 * 8 + 4) = param_2[1];
    local_24 = local_24 + 1;
    uVar3 = *param_1;
    uVar1 = uVar3 + param_1[1] * 8;
    FUN_0200f69c(&uStack_2c,1);
    iVar2 = local_28 + local_18 * 8;
    while (uVar3 < uVar1) {
      uVar1 = uVar1 - 8;
      iVar2 = iVar2 + -8;
      FUN_021b9cc8(local_1c,iVar2,uVar1);
      local_18 = local_18 - 1;
      local_24 = local_24 + 1;
    }
    FUN_0200f69c(&uStack_2b,1);
    param_1[1] = 0;
    FUN_021ac7d8(param_1 + 2,&local_20);
    uVar1 = *param_1;
    *param_1 = local_28;
    local_28 = uVar1;
    FUN_021ac7d8(param_1 + 1,&local_24);
    FUN_021ba258(&local_28);
  }
  return;
}

