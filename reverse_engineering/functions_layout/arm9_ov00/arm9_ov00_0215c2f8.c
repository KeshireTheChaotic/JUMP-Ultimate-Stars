
/* JUS-GAME ALNodeImp::Create [source-string-template] __FILE__="ALNodeImp.h" __FUNCTION__="Create";
   one of 2 instantiations in arm9_ov00 */

int ALNodeImp::Create(void)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = thunk_FUN_0201a228(0x78,&DAT_02161148,&DAT_0216172c,0x4c3);
  piVar2 = (int *)0x0;
  if (iVar1 != 0) {
    piVar2 = (int *)jus_TagNDGR_0209c0b4::jus_TagNDGR_0209c0b4(iVar1,FUN_02024a30,1);
  }
  if (piVar2[6] == 0) {
    (**(code **)(*piVar2 + 0x14))();
  }
  return piVar2[6];
}

