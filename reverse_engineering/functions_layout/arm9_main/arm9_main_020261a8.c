
void FUN_020261a8(int *param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
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
  
                    /* JUS-TAG strings=["Memory allocation failure","vector length error"] */
  FUN_0200f69c(&uStack_30,1);
  uVar2 = param_1[1];
  if (uVar2 < (uint)param_1[2]) {
    param_1[1] = uVar2 + 1;
    FUN_0202604c(uVar2 * 0xc + *param_1,param_2);
  }
  else {
    FUN_0200f69c(&uStack_2f,1);
    FUN_0200f69c(auStack_2a,1);
    FUN_0204ecd0(param_1,1);
    local_1c = param_1 + 2;
    local_28 = 0;
    local_24 = 0;
    local_20 = 0;
    local_18 = 0;
    uVar2 = FUN_0204ecd0(param_1,(param_1[1] + 1) - param_1[2]);
    FUN_0200f69c(&uStack_2e,1);
    if (0x15555555 < uVar2) {
      FUN_02003bd8(s_vector_length_error_0209d908);
      FUN_02001f18();
    }
    iVar1 = jus_AllocDebug(uVar2 * 0xc);
    if (iVar1 == 0) {
      FUN_02003bd8(s_Memory_allocation_failure_0209d8b4);
      FUN_02001f18();
    }
    local_18 = param_1[1];
    local_28 = iVar1;
    local_20 = uVar2;
    FUN_0200f69c(&uStack_2d,1);
    FUN_0202604c(local_24 * 0xc + local_18 * 0xc + local_28,param_2);
    local_24 = local_24 + 1;
    puVar6 = (undefined4 *)*param_1;
    iVar1 = param_1[1];
    FUN_0200f69c(&uStack_2c,1);
    puVar4 = (undefined4 *)(local_18 * 0xc + local_28);
    puVar5 = puVar6 + iVar1 * 3;
    while (puVar6 < puVar5) {
      puVar3 = puVar4 + -3;
      if (puVar3 != (undefined4 *)0x0) {
        *puVar3 = puVar5[-3];
        *(undefined1 *)(puVar4 + -2) = *(undefined1 *)(puVar5 + -2);
        puVar4[-1] = puVar5[-1];
      }
      local_18 = local_18 + -1;
      local_24 = local_24 + 1;
      puVar4 = puVar3;
      puVar5 = puVar5 + -3;
    }
    FUN_0200f69c(&uStack_2b,1);
    param_1[1] = 0;
    FUN_0204f098(param_1 + 2,&local_20);
    iVar1 = *param_1;
    *param_1 = local_28;
    local_28 = iVar1;
    FUN_0204f098(param_1 + 1,&local_24);
    FUN_0204eff4(&local_28);
  }
  return;
}

