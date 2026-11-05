
/* JUS-GAME BattlePauseWiFi::Battle_PauseWiFiCreate [source-string] __FILE__="BattlePauseWiFi.cpp"
   __FUNCTION__="Battle_PauseWiFiCreate" lines=[48] passed to 1 source-location call(s) */

int * BattlePauseWiFi::Battle_PauseWiFiCreate(void)

{
  int iVar1;
  int *piVar2;
  undefined4 local_10;
  undefined4 local_c;
  
  iVar1 = thunk_FUN_0208c51c();
  if (iVar1 == 0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)jus_AllocDebug(0xc,s_BattlePauseWiFi_cpp_02171b64,
                                   s_Battle_PauseWiFiCreate_02171b4c,0x30);
    FUN_020517fc(piVar2,0,0xc);
    iVar1 = FUN_02026f94();
    *piVar2 = iVar1;
    iVar1 = FUN_02031124();
    FUN_02027db0(*(undefined4 *)(*piVar2 + 4),*(undefined4 *)(iVar1 + 4));
    local_c = 0x80000;
    FUN_0214f63c(*piVar2,&local_c);
    FUN_02028384(*(undefined4 *)(*piVar2 + 4),FUN_0214f6e8);
    (**(code **)(**(int **)(*piVar2 + 4) + 0x24))(*(int **)(*piVar2 + 4),piVar2);
    iVar1 = FUN_02026f94();
    piVar2[1] = iVar1;
    iVar1 = FUN_02031124();
    FUN_02027db0(*(undefined4 *)(piVar2[1] + 4),*(undefined4 *)(iVar1 + 4));
    local_10 = 0x7f000;
    FUN_0214f63c(piVar2[1],&local_10);
    FUN_02028384(*(undefined4 *)(piVar2[1] + 4),FUN_0214f7ac);
    (**(code **)(**(int **)(piVar2[1] + 4) + 0x24))(*(int **)(piVar2[1] + 4),piVar2);
    *(undefined1 *)(piVar2 + 2) = 0;
    *(undefined1 *)((int)piVar2 + 9) = 1;
  }
  return piVar2;
}

