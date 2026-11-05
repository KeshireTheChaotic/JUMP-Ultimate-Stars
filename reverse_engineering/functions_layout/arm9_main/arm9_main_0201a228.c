
/* WARNING: Removing unreachable block (ram,0x0201a25c) */
/* JUS-SDK jus_AllocDebug [behavioral] receives (__FILE__ in r1, __FUNCTION__ in r2) at 68 call
   sites */

void jus_AllocDebug(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  uVar1 = param_4;
  if ((param_1 < 0x101) && (uVar1 = 0, *(char *)(DAT_020a0dd8 + 0x414) != '\0')) {
    FUN_0201a6d8(DAT_020a0f60,param_1);
    return;
  }
  FUN_0201a418(DAT_020a0dd8,0,param_1,uVar1,param_4);
  return;
}

