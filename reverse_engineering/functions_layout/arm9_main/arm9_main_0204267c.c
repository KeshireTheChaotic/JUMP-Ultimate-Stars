
void FUN_0204267c(undefined4 param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  bool bVar7;
  undefined1 uStack_38;
  undefined1 uStack_37;
  undefined1 uStack_36;
  undefined1 uStack_35;
  undefined1 uStack_34;
  undefined1 uStack_33;
  undefined1 auStack_32 [2];
  int local_30;
  int local_2c;
  undefined4 *local_28;
  int local_24;
  uint local_20;
  undefined4 *local_1c;
  uint local_18;
  undefined4 uStack_14;
  
                    /* JUS-TAG strings=["Memory allocation failure","vector length error"] */
  uVar6 = 0;
  while( true ) {
    if (DAT_020a145c <= uVar6) {
      local_30 = param_2;
      local_2c = param_3;
      uStack_14 = param_4;
      FUN_0200f69c(auStack_32,1);
      if (DAT_020a145c < DAT_020a1460) {
        iVar1 = DAT_020a145c * 2;
        DAT_020a145c = DAT_020a145c + 1;
        FUN_020428c8(DAT_020a1458 + iVar1,&local_30);
      }
      else {
        FUN_0200f69c(&uStack_33,1);
        FUN_0200f69c(&uStack_38,1);
        FUN_0204eb60(&DAT_020a1458,1);
        local_28 = (undefined4 *)0x0;
        local_24 = 0;
        local_20 = 0;
        local_18 = 0;
        local_1c = &DAT_020a1460;
        uVar6 = FUN_0204eb60(&DAT_020a1458,(DAT_020a145c + 1) - DAT_020a1460);
        FUN_0200f69c(&uStack_34,1);
        if (0x1fffffff < uVar6) {
          FUN_02003bd8(s_vector_length_error_0209d908);
          FUN_02001f18();
        }
        puVar2 = (undefined4 *)jus_AllocDebug(uVar6 << 3);
        if (puVar2 == (undefined4 *)0x0) {
          FUN_02003bd8(s_Memory_allocation_failure_0209d8ec);
          FUN_02001f18();
        }
        local_18 = DAT_020a145c;
        local_28 = puVar2;
        local_20 = uVar6;
        FUN_0200f69c(&uStack_35,1);
        local_28[local_18 * 2 + local_24 * 2] = local_30;
        local_28[local_18 * 2 + local_24 * 2 + 1] = local_2c;
        puVar2 = DAT_020a1458;
        local_24 = local_24 + 1;
        puVar5 = DAT_020a1458 + DAT_020a145c * 2;
        FUN_0200f69c(&uStack_36,1);
        puVar4 = local_28 + local_18 * 2;
        while (puVar2 < puVar5) {
          puVar3 = puVar4 + -2;
          if (puVar3 != (undefined4 *)0x0) {
            *puVar3 = puVar5[-2];
            puVar4[-1] = puVar5[-1];
          }
          local_18 = local_18 - 1;
          local_24 = local_24 + 1;
          puVar4 = puVar3;
          puVar5 = puVar5 + -2;
        }
        FUN_0200f69c(&uStack_37,1);
        DAT_020a145c = 0;
        FUN_0204f098(&DAT_020a1460,&local_20);
        puVar2 = DAT_020a1458;
        DAT_020a1458 = local_28;
        local_28 = puVar2;
        FUN_0204f098(&DAT_020a145c,&local_24);
        FUN_0204efbc(&local_28);
      }
      return;
    }
    iVar1 = DAT_020a1458[uVar6 * 2];
    bVar7 = iVar1 == param_2;
    if (bVar7) {
      iVar1 = DAT_020a1458[uVar6 * 2 + 1];
    }
    if (bVar7 && iVar1 == param_3) break;
    uVar6 = uVar6 + 1;
  }
  return;
}

