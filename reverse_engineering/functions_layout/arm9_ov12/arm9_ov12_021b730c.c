
void FUN_021b730c(int *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined1 uStack_30;
  undefined1 uStack_2f;
  undefined1 uStack_2e;
  undefined1 uStack_2d;
  undefined1 uStack_2c;
  undefined1 uStack_2b;
  undefined1 auStack_2a [2];
  int local_28;
  int local_24;
  uint local_20;
  int *local_1c;
  int local_18;
  
  FUN_0200f69c(&uStack_30,1);
  uVar4 = param_1[1];
  if (uVar4 < (uint)param_1[2]) {
    param_1[1] = uVar4 + 1;
    FUN_021b7448(*param_1 + uVar4 * 8,param_2);
  }
  else {
    FUN_0200f69c(&uStack_2f,1);
    FUN_0200f69c(auStack_2a,1);
    FUN_021b9f40(param_1,1);
    local_1c = param_1 + 2;
    local_28 = 0;
    local_24 = 0;
    local_20 = 0;
    local_18 = 0;
    uVar4 = FUN_021b9f40(param_1,(param_1[1] + 1) - param_1[2]);
    FUN_0200f69c(&uStack_2e,1);
    if (0x1fffffff < uVar4) {
      FUN_02003bd8(s_vector_length_error_021d3dd4);
      FUN_02001f18();
    }
    iVar1 = thunk_FUN_0201a228(uVar4 << 3);
    if (iVar1 == 0) {
      FUN_02003bd8(s_Memory_allocation_failure_021d3d64);
      FUN_02001f18();
    }
    local_18 = param_1[1];
    local_28 = iVar1;
    local_20 = uVar4;
    FUN_0200f69c(&uStack_2d,1);
    iVar1 = local_28 + local_18 * 8;
    *(undefined4 *)(iVar1 + local_24 * 8) = *param_2;
    *(undefined4 *)(iVar1 + local_24 * 8 + 4) = param_2[1];
    local_24 = local_24 + 1;
    iVar1 = param_1[1];
    puVar6 = (undefined4 *)*param_1;
    FUN_0200f69c(&uStack_2c,1);
    puVar3 = (undefined4 *)(local_28 + local_18 * 8);
    puVar5 = puVar6 + iVar1 * 2;
    while (puVar6 < puVar5) {
      puVar2 = puVar3 + -2;
      if (puVar2 != (undefined4 *)0x0) {
        *puVar2 = puVar5[-2];
        puVar3[-1] = puVar5[-1];
      }
      local_18 = local_18 + -1;
      local_24 = local_24 + 1;
      puVar3 = puVar2;
      puVar5 = puVar5 + -2;
    }
    FUN_0200f69c(&uStack_2b,1);
    param_1[1] = 0;
    FUN_021ac7d8(param_1 + 2,&local_20);
    iVar1 = *param_1;
    *param_1 = local_28;
    local_28 = iVar1;
    FUN_021ac7d8(param_1 + 1,&local_24);
    FUN_021ba23c(&local_28);
  }
  return;
}

