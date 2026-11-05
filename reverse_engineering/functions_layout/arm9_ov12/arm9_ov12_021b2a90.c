
/* JUS-GAME ALMotionDynamic::NewMotion [source-string] __FILE__="ALMotionDynamic.cpp"
   __FUNCTION__="NewMotion" lines=[] passed to 1 source-location call(s) */

void ALMotionDynamic::NewMotion(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 1;
  iVar1 = jus_AllocDebug(0x44,s_ALMotionDynamic_cpp_021d28a0,s_NewMotion_021d27f8,0x1d8);
  piVar2 = (int *)0x0;
  if (iVar1 != 0) {
    piVar2 = (int *)ALMotionDynamic_021d2618::ALMotionDynamic_021d2618();
  }
  iVar1 = *(int *)(*(int *)(param_1 + 0x44) + 0x1c);
  if (iVar1 == 0) {
    FUN_0201b764(piVar2);
    iVar1 = *(int *)(param_1 + 0x44);
  }
  else {
    FUN_0201b764(piVar2,iVar1);
    iVar1 = *(int *)(*(int *)(param_1 + 0x44) + 0x1c);
  }
  while (*(int *)(iVar1 + 0x20) != 0) {
    iVar3 = iVar3 + 1;
    iVar1 = *(int *)(iVar1 + 0x20);
  }
  *(int **)(iVar1 + 0x20) = piVar2;
  (**(code **)(*piVar2 + 0x48))(piVar2,iVar3);
  *(short *)(param_1 + 0x2a) = (short)iVar3;
  *(int **)(param_1 + 0x44) = piVar2;
  *(undefined2 *)(param_1 + 0x30) = 0;
  return;
}

