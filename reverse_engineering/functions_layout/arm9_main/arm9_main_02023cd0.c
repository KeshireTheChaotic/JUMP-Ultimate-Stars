
void FUN_02023cd0(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined1 uStack_38;
  undefined1 uStack_37;
  undefined1 uStack_36;
  undefined1 uStack_35;
  undefined1 uStack_34;
  undefined1 uStack_33;
  undefined1 auStack_32 [2];
  uint local_30;
  undefined4 local_2c;
  undefined4 *local_28;
  int local_24;
  uint local_20;
  undefined4 *local_1c;
  uint local_18;
  undefined4 uStack_14;
  
                    /* JUS-TAG strings=["Memory allocation failure","vector length error"] */
  uVar6 = 0;
  while( true ) {
    if (DAT_020a1180 <= uVar6) {
      local_30 = param_1;
      local_2c = param_2;
      uStack_14 = param_4;
      FUN_0200f69c(auStack_32,1);
      if (DAT_020a1180 < DAT_020a1184) {
        iVar1 = DAT_020a1180 * 2;
        DAT_020a1180 = DAT_020a1180 + 1;
        FUN_02023f24(DAT_020a117c + iVar1,&local_30);
      }
      else {
        FUN_0200f69c(&uStack_33,1);
        FUN_0200f69c(&uStack_38,1);
        FUN_0204ec18(&DAT_020a117c,1);
        local_28 = (undefined4 *)0x0;
        local_24 = 0;
        local_20 = 0;
        local_18 = 0;
        local_1c = &DAT_020a1184;
        uVar6 = FUN_0204ec18(&DAT_020a117c,(DAT_020a1180 + 1) - DAT_020a1184);
        FUN_0200f69c(&uStack_34,1);
        if (0x1fffffff < uVar6) {
          FUN_02003bd8(s_vector_length_error_0209d908);
          FUN_02001f18();
        }
        puVar2 = (undefined4 *)jus_AllocDebug(uVar6 << 3);
        if (puVar2 == (undefined4 *)0x0) {
          FUN_02003bd8(s_Memory_allocation_failure_0209d8d0);
          FUN_02001f18();
        }
        local_18 = DAT_020a1180;
        local_28 = puVar2;
        local_20 = uVar6;
        FUN_0200f69c(&uStack_35,1);
        local_28[local_18 * 2 + local_24 * 2] = local_30;
        local_28[local_18 * 2 + local_24 * 2 + 1] = local_2c;
        puVar2 = DAT_020a117c;
        local_24 = local_24 + 1;
        puVar5 = DAT_020a117c + DAT_020a1180 * 2;
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
        DAT_020a1180 = 0;
        FUN_0204f098(&DAT_020a1184,&local_20);
        puVar2 = DAT_020a117c;
        DAT_020a117c = local_28;
        local_28 = puVar2;
        FUN_0204f098(&DAT_020a1180,&local_24);
        FUN_0204efd8(&local_28);
      }
      return;
    }
    if ((param_1 & 0xffff) == (DAT_020a117c[uVar6 * 2] & 0xffff)) break;
    uVar6 = uVar6 + 1;
  }
  DAT_020a117c[uVar6 * 2 + 1] = param_2;
  return;
}

