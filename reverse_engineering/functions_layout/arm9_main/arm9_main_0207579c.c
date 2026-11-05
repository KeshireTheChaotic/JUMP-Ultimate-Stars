
/* JUS-GAME BgmData::BgmData_Create [source-string] __FILE__="BgmData.cpp"
   __FUNCTION__="BgmData_Create" lines=[20] passed to 1 source-location call(s) */

int * BgmData::BgmData_Create(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined4 in_r3;
  
                    /* JUS-TAG strings=["BgmData.cpp","BgmData_Create","bin/bgm.bin"] */
  piVar1 = (int *)thunk_FUN_0201a228(0xc,s_BgmData_cpp_0209f4a8,s_BgmData_Create_0209f498,0x14,in_r3
                                    );
  FUN_020517fc(piVar1,0,0xc);
  piVar2 = (int *)FUN_02033410(s_bin_bgm_bin_0209f4b4,0,0);
  if (piVar2[7] == 0) {
    (**(code **)(*piVar2 + 0x10))();
  }
  iVar3 = piVar2[7];
  *piVar1 = iVar3;
  piVar2 = *(int **)(iVar3 + 4);
  piVar2 = (int *)(**(code **)(*piVar2 + 0x2c))(piVar2,0);
  piVar1[2] = *piVar2;
  iVar3 = (**(code **)(**(int **)(*piVar1 + 4) + 0x2c))(*(int **)(*piVar1 + 4),0);
  piVar1[1] = iVar3 + 4;
  return piVar1;
}

