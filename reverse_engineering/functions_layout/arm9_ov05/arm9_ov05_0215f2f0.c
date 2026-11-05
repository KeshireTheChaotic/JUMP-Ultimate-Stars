
/* JUS-GAME KomaExplanationData::KomaExplanationData_Create [source-string]
   __FILE__="KomaExplanationData.cpp" __FUNCTION__="KomaExplanationData_Create" lines=[23] passed to
   1 source-location call(s) */

int * KomaExplanationData::KomaExplanationData_Create(int param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  undefined1 auStack_28 [24];
  
  piVar1 = (int *)thunk_FUN_0201a228(8,s_KomaExplanationData_cpp_02170764,
                                     s_KomaExplanationData_Create_02170748,0x17);
  FUN_020517fc(piVar1,0,8);
  piVar2 = (int *)FUN_020101f4(s_bin_InfoDeck_aar_0217077c,0);
  thunk_FUN_0207400c(auStack_28,s_bin_deck__02170790);
  thunk_FUN_020741c4(auStack_28,(&PTR_DAT_0209e840)[param_1]);
  thunk_FUN_020741c4(auStack_28,&DAT_0217079c);
  piVar3 = (int *)FUN_02033410(auStack_28,0,0);
  if (piVar3[7] == 0) {
    (**(code **)(*piVar3 + 0x10))();
  }
  iVar4 = piVar3[7];
  *piVar1 = iVar4;
  piVar3 = *(int **)(iVar4 + 4);
  iVar4 = (**(code **)(*piVar3 + 0x2c))(piVar3,0);
  piVar1[1] = iVar4;
  (**(code **)(*piVar2 + 0xc))();
  return piVar1;
}

