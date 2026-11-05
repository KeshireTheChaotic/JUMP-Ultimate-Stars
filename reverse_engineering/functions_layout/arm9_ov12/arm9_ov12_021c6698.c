
void FUN_021c6698(int param_1,undefined4 param_2)

{
  undefined2 uVar1;
  uint uVar2;
  undefined2 *puVar3;
  int iVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  undefined2 *puVar8;
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
  int local_1c;
  int local_18;
  
  FUN_0200f69c(auStack_2a,1);
  uVar2 = *(uint *)(param_1 + 0x5c);
  if (uVar2 < *(uint *)(param_1 + 0x60)) {
    *(uint *)(param_1 + 0x5c) = uVar2 + 1;
    FUN_021c6544(*(int *)(param_1 + 0x58) + uVar2 * 8,param_2);
  }
  else {
    FUN_0200f69c(&uStack_2b,1);
    FUN_0200f69c(&uStack_30,1);
    FUN_021c776c(param_1 + 0x58,1);
    local_1c = param_1 + 0x60;
    local_28 = 0;
    local_24 = 0;
    local_20 = 0;
    local_18 = 0;
    uVar2 = FUN_021c776c(param_1 + 0x58,(*(int *)(param_1 + 0x5c) + 1) - *(int *)(param_1 + 0x60));
    FUN_0200f69c(&uStack_2c,1);
    if (0x1fffffff < uVar2) {
      FUN_02003bd8(s_vector_length_error_021d48b8);
      FUN_02001f18();
    }
    local_28 = FUN_021c7880(local_1c,uVar2,0);
    local_18 = *(int *)(param_1 + 0x5c);
    local_20 = uVar2;
    FUN_0200f69c(&uStack_2d,1);
    FUN_021c6544(local_28 + local_18 * 8 + local_24 * 8,param_2);
    local_24 = local_24 + 1;
    puVar8 = *(undefined2 **)(param_1 + 0x58);
    puVar7 = puVar8 + *(int *)(param_1 + 0x5c) * 4;
    FUN_0200f69c(&uStack_2e,1);
    puVar6 = (undefined2 *)(local_28 + local_18 * 8);
    while (puVar8 < puVar7) {
      puVar7 = puVar7 + -4;
      puVar6 = puVar6 + -4;
      if (puVar6 != (undefined2 *)0x0) {
        iVar4 = 4;
        puVar3 = puVar6;
        puVar5 = puVar7;
        do {
          uVar1 = *puVar5;
          puVar5 = puVar5 + 1;
          *puVar3 = uVar1;
          puVar3 = puVar3 + 1;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
      local_18 = local_18 + -1;
      local_24 = local_24 + 1;
    }
    FUN_0200f69c(&uStack_2f,1);
    *(undefined4 *)(param_1 + 0x5c) = 0;
    FUN_021ac7d8(param_1 + 0x60,&local_20);
    iVar4 = *(int *)(param_1 + 0x58);
    *(int *)(param_1 + 0x58) = local_28;
    local_28 = iVar4;
    FUN_021ac7d8(param_1 + 0x5c,&local_24);
    FUN_021c7864(&local_28);
  }
  *(undefined1 *)(param_1 + 0x10d) = 1;
  return;
}

