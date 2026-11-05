
/* JUS-GAME ALCollision::CreateChecker [source-string] __FILE__="ALCollision.cpp"
   __FUNCTION__="CreateChecker" lines=[3556] passed to 1 source-location call(s) */

undefined4
ALCollision::CreateChecker(int param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = param_2 * 4;
  iVar3 = param_1 + 0x48;
  if (*(int *)(iVar3 + iVar4) == 0) {
    iVar1 = thunk_FUN_0201a228(0x14,s_ALCollision_cpp_021d25e0,s_CreateChecker_021d18ec,0xde4,
                               param_4);
    uVar2 = 0;
    if (iVar1 != 0) {
      uVar2 = FUN_021b1624(iVar1,param_1);
    }
    *(undefined4 *)(iVar3 + iVar4) = uVar2;
    if ((*(uint *)(param_1 + 200) >> (param_2 & 0xff) & 1) == 0) {
      FUN_021b18ac(*(undefined4 *)(iVar3 + iVar4));
    }
    else {
      FUN_021b1894();
    }
  }
  return *(undefined4 *)(iVar3 + iVar4);
}

