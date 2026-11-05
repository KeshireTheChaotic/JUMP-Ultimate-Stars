
void FUN_021b4104(int param_1,undefined4 param_2,undefined2 param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined1 uStack_38;
  undefined1 uStack_37;
  undefined1 uStack_36;
  undefined1 uStack_35;
  undefined1 uStack_34;
  undefined1 uStack_33;
  undefined1 auStack_32 [2];
  undefined4 local_30;
  undefined2 local_2c;
  undefined1 local_2a;
  int local_28;
  int local_24;
  uint local_20;
  int local_1c;
  int local_18;
  undefined4 uStack_14;
  
  local_2a = 1;
  local_30 = param_2;
  local_2c = param_3;
  uStack_14 = param_4;
  FUN_0200f69c(auStack_32);
  if (*(uint *)(param_1 + 0x88) < *(uint *)(param_1 + 0x8c)) {
    *(int *)(param_1 + 0x88) = *(int *)(param_1 + 0x88) + 1;
    FUN_021b4274(*(int *)(param_1 + 0x84) + (*(int *)(param_1 + 0x88) + -1) * 8,&local_30);
  }
  else {
    FUN_0200f69c(&uStack_33,1);
    FUN_0200f69c(&uStack_38,1);
    FUN_021ba0b0(param_1 + 0x84,1);
    local_1c = param_1 + 0x8c;
    local_28 = 0;
    local_24 = 0;
    local_20 = 0;
    local_18 = 0;
    uVar1 = FUN_021ba0b0(param_1 + 0x84,(*(int *)(param_1 + 0x88) + 1) - *(int *)(param_1 + 0x8c));
    FUN_0200f69c(&uStack_34,1);
    if (0x1fffffff < uVar1) {
      FUN_02003bd8(s_vector_length_error_021d3dd4);
      FUN_02001f18();
    }
    local_28 = FUN_021ba2d8(local_1c,uVar1,0);
    local_18 = *(int *)(param_1 + 0x88);
    local_20 = uVar1;
    FUN_0200f69c(&uStack_35,1);
    FUN_021b4274(local_28 + local_18 * 8 + local_24 * 8,&local_30);
    local_24 = local_24 + 1;
    puVar7 = *(undefined4 **)(param_1 + 0x84);
    iVar2 = *(int *)(param_1 + 0x88);
    FUN_0200f69c(&uStack_36,1);
    puVar4 = (undefined4 *)(local_28 + local_18 * 8);
    puVar6 = puVar7 + iVar2 * 2;
    while (puVar7 < puVar6) {
      puVar3 = puVar4 + -2;
      if (puVar3 != (undefined4 *)0x0) {
        uVar5 = puVar6[-1];
        *puVar3 = puVar6[-2];
        puVar4[-1] = uVar5;
      }
      local_18 = local_18 + -1;
      local_24 = local_24 + 1;
      puVar4 = puVar3;
      puVar6 = puVar6 + -2;
    }
    FUN_0200f69c(&uStack_37,1);
    *(undefined4 *)(param_1 + 0x88) = 0;
    FUN_021ac7d8(param_1 + 0x8c,&local_20);
    iVar2 = *(int *)(param_1 + 0x84);
    *(int *)(param_1 + 0x84) = local_28;
    local_28 = iVar2;
    FUN_021ac7d8(param_1 + 0x88,&local_24);
    FUN_021ba274(&local_28);
  }
  return;
}

