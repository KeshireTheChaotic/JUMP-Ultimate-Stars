
void FUN_020292e0(int param_1,undefined4 param_2,undefined2 param_3,undefined2 param_4)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined1 uStack_38;
  undefined1 uStack_37;
  undefined1 uStack_36;
  undefined1 uStack_35;
  undefined1 uStack_34;
  undefined1 uStack_33;
  undefined1 auStack_32 [2];
  int local_30;
  int local_2c;
  uint local_28;
  int local_24;
  int local_20;
  undefined4 local_1c;
  undefined2 local_18;
  undefined2 local_16;
  undefined1 local_14;
  
                    /* JUS-TAG strings=["Memory allocation failure","vector length error"] */
  local_14 = 1;
  local_1c = param_2;
  local_18 = param_3;
  local_16 = param_4;
  FUN_0200f69c(auStack_32);
  uVar2 = *(uint *)(param_1 + 0xd4);
  if (uVar2 < *(uint *)(param_1 + 0xd8)) {
    *(uint *)(param_1 + 0xd4) = uVar2 + 1;
    FUN_020294dc(uVar2 * 0xc + *(int *)(param_1 + 0xd0),&local_1c);
  }
  else {
    FUN_0200f69c(&uStack_33,1);
    FUN_0200f69c(&uStack_38,1);
    FUN_0204ed8c(param_1 + 0xd0,1);
    local_24 = param_1 + 0xd8;
    local_30 = 0;
    local_2c = 0;
    local_28 = 0;
    local_20 = 0;
    uVar2 = FUN_0204ed8c(param_1 + 0xd0,(*(int *)(param_1 + 0xd4) + 1) - *(int *)(param_1 + 0xd8));
    FUN_0200f69c(&uStack_34,1);
    if (0x15555555 < uVar2) {
      FUN_02003bd8(s_vector_length_error_0209d908);
      FUN_02001f18();
    }
    iVar1 = jus_AllocDebug(uVar2 * 0xc);
    if (iVar1 == 0) {
      FUN_02003bd8(s_Memory_allocation_failure_0209d898);
      FUN_02001f18();
    }
    local_20 = *(int *)(param_1 + 0xd4);
    local_30 = iVar1;
    local_28 = uVar2;
    FUN_0200f69c(&uStack_35,1);
    FUN_020294dc(local_2c * 0xc + local_20 * 0xc + local_30,&local_1c);
    local_2c = local_2c + 1;
    puVar8 = *(undefined4 **)(param_1 + 0xd0);
    iVar1 = *(int *)(param_1 + 0xd4);
    FUN_0200f69c(&uStack_36,1);
    puVar6 = (undefined4 *)(local_20 * 0xc + local_30);
    puVar7 = puVar8 + iVar1 * 3;
    while (puVar8 < puVar7) {
      puVar5 = puVar6 + -3;
      if (puVar5 != (undefined4 *)0x0) {
        uVar3 = puVar7[-2];
        uVar4 = puVar7[-1];
        *puVar5 = puVar7[-3];
        puVar6[-2] = uVar3;
        puVar6[-1] = uVar4;
      }
      local_20 = local_20 + -1;
      local_2c = local_2c + 1;
      puVar6 = puVar5;
      puVar7 = puVar7 + -3;
    }
    FUN_0200f69c(&uStack_37,1);
    *(undefined4 *)(param_1 + 0xd4) = 0;
    FUN_0204f098(param_1 + 0xd8,&local_28);
    iVar1 = *(int *)(param_1 + 0xd0);
    *(int *)(param_1 + 0xd0) = local_30;
    local_30 = iVar1;
    FUN_0204f098(param_1 + 0xd4,&local_2c);
    FUN_0204f010(&local_30);
  }
  return;
}

