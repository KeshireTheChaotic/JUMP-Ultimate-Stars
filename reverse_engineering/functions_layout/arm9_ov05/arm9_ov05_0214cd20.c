
/* JUS-GAME ComicDeckMakeDisp::ComicDeck_DispKomaCreate [source-string]
   __FILE__="ComicDeckMakeDisp.cpp" __FUNCTION__="ComicDeck_DispKomaCreate" lines=[30] passed to 1
   source-location call(s) */

int ComicDeckMakeDisp::ComicDeck_DispKomaCreate
              (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 local_18;
  undefined4 uStack_14;
  
  uStack_14 = param_4;
  iVar1 = thunk_FUN_0201a228(0x60,s_ComicDeckMakeDisp_cpp_0216f35c,
                             s_ComicDeck_DispKomaCreate_0216f340,0x1e);
  FUN_020517fc(iVar1,0,0x60);
  *(undefined4 *)(iVar1 + 4) = param_2;
  *(undefined4 *)(iVar1 + 8) = param_1;
  iVar2 = FUN_02026f94();
  *(int *)(iVar1 + 0xc) = iVar2;
  local_18 = 0x80000;
  (**(code **)(**(int **)(iVar2 + 4) + 0xa0))(*(int **)(iVar2 + 4),&local_18);
  FUN_02028384(*(undefined4 *)(*(int *)(iVar1 + 0xc) + 4),FUN_0214d4fc);
  piVar3 = *(int **)(*(int *)(iVar1 + 0xc) + 4);
  (**(code **)(*piVar3 + 0x24))(piVar3,iVar1);
  *(undefined2 *)(iVar1 + 0x50) = 0xffff;
  *(undefined2 *)(iVar1 + 0x52) = 0x80;
  return iVar1;
}

