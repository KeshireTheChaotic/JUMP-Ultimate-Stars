
/* JUS-GAME ALCollision::RegistCollision [source-string] __FILE__="ALCollision.cpp"
   __FUNCTION__="RegistCollision" lines=[222, 234] passed to 2 source-location call(s) */

void ALCollision::RegistCollision
               (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int local_9c;
  int local_98;
  undefined1 local_94 [124];
  undefined4 uStack_18;
  
  if ((*(char *)(param_1 + 0x22) == '\0') &&
     (uStack_18 = param_4, iVar1 = FUN_021b0c5c(), iVar1 != 0)) {
    local_98 = FUN_021b0a78(param_1);
    uVar4 = 0;
    iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + 0x34);
    uVar5 = 0;
    do {
      if ((1 << (uVar5 & 0xff) & *(uint *)(param_1 + 0x2c)) != 0) {
        if (uVar4 == 0) {
          *(undefined1 *)(param_1 + 0x22) = 1;
          uVar2 = CreateChecker(*(undefined4 *)(iVar1 + 600),uVar5);
          FUN_021b18c4(uVar2,local_98);
          uVar4 = 1;
        }
        else {
          iVar3 = *(int *)(local_98 + 4);
          local_9c = thunk_FUN_0201a228(0x10,s_ALCollision_cpp_021d25e0,s_RegistCollision_021d191c,
                                        0xde);
          if (local_9c != 0) {
            local_9c = ALCollision_021d1a4c::ALCollision_021d1a4c(local_9c,param_1);
          }
          *(int *)(iVar3 + 0x18) = local_98;
          *(int *)(local_94 + uVar4 * 4 + -4) = local_9c;
          uVar2 = CreateChecker(*(undefined4 *)(iVar1 + 600),uVar5);
          FUN_021b18c4(uVar2,local_9c);
          uVar4 = uVar4 + 1;
        }
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < 0x20);
    if (1 < uVar4) {
      iVar1 = (uVar4 - 1) * 4;
      uVar2 = thunk_FUN_0201a228(iVar1,s_ALCollision_cpp_021d25e0,s_RegistCollision_021d191c,0xea);
      *(undefined4 *)(param_1 + 0x58) = uVar2;
      MIi_CpuCopy32(local_94,*(undefined4 *)(param_1 + 0x58),iVar1);
    }
  }
  return;
}

