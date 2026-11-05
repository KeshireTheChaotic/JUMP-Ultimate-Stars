
/* JUS-GAME ALNodeImp::Create [source-string-template] __FILE__="ALNodeImp.h" __FUNCTION__="Create";
   one of 2 instantiations in arm9_ov00 */

int ALNodeImp::Create(void)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = jus_AllocDebug(0x78,s_ALNodeImp_h_02161148,s_Create_0216172c,0x4c3);
  piVar2 = (int *)0x0;
  if (iVar1 != 0) {
    piVar2 = (int *)jus_Class_0209c0b4::jus_Class_0209c0b4(iVar1,FUN_02024a30,1);
  }
  if (piVar2[6] == 0) {
    (**(code **)(*piVar2 + 0x14))();
  }
  return piVar2[6];
}

