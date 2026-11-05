
/* JUS-GAME CommuMenuWrlsEntryObj::CommuMenuWrlsEntryObj_Init [source-string]
   __FILE__="CommuMenuWrlsEntryObj.cpp" __FUNCTION__="CommuMenuWrlsEntryObj_Init" lines=[84] passed
   to 1 source-location call(s) */

void CommuMenuWrlsEntryObj::CommuMenuWrlsEntryObj_Init(void)

{
  int *piVar1;
  int iVar2;
  
  if (DAT_0216ad78 == (int *)0x0) {
    FUN_02086cf4();
    piVar1 = (int *)jus_AllocDebug(0xbec,s_CommuMenuWrlsEntryObj_cpp_0216a15c,
                                   s_CommuMenuWrlsEntryObj_Init_0216a0f8,0x54);
    FUN_020517fc(piVar1,0,0xbec);
    *(undefined1 *)(piVar1 + 0x2fa) = 1;
    iVar2 = FUN_02026f94();
    *piVar1 = iVar2;
    (**(code **)(**(int **)(iVar2 + 4) + 0x24))(*(int **)(iVar2 + 4),piVar1);
    FUN_02028384(*(undefined4 *)(*piVar1 + 4),&LAB_02159608);
    FUN_02027834(*(undefined4 *)(*piVar1 + 4),8,FUN_02158e90);
    DAT_0216ad78 = piVar1;
  }
  piVar1 = DAT_0216ad78;
  *(undefined1 *)(DAT_0216ad78 + 0x2f8) = 0;
  piVar1[0x298] = -1;
  piVar1[0x2f7] = -1;
  return;
}

