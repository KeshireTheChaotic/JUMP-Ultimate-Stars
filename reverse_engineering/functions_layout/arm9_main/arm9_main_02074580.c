
/* JUS-GAME CharaData::CharaData_Create [source-string] __FILE__="CharaData.cpp"
   __FUNCTION__="CharaData_Create" lines=[77] passed to 1 source-location call(s) */

int CharaData::CharaData_Create
              (int param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined1 param_5)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_4;
                    /* JUS-TAG strings=["CharaData.cpp","CharaData_Create"] */
  iVar1 = thunk_FUN_0201a228(0x90,s_CharaData_cpp_0209f1d8,s_CharaData_Create_0209f184,0x4d);
  FUN_020517fc(iVar1,0,0x90);
  *(bool *)(iVar1 + 0x8f) = param_4 != 0;
  (*(code *)(&PTR_FUN_0209f1b8)[param_1])(iVar1,param_1,param_2,param_3,param_5,iVar2);
  return iVar1;
}

