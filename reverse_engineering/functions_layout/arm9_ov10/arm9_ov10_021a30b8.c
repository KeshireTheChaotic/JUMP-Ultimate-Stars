
/* JUS-GAME WiFiDataSendRecv::WiFiDataSendRecv_DataSendONEWAYUnreliable [source-string]
   __FILE__="WiFiDataSendRecv.cpp" __FUNCTION__="WiFiDataSendRecv_DataSendONEWAYUnreliable"
   lines=[562] passed to 1 source-location call(s) */

void WiFiDataSendRecv::WiFiDataSendRecv_DataSendONEWAYUnreliable
               (undefined4 param_1,int param_2,uint param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  uint local_20;
  
  local_20 = param_4;
  iVar1 = jus_AllocDebug(param_2 + 8U & 0xfffffffc,s_WiFiDataSendRecv_cpp_021a7318,
                         s_WiFiDataSendRecv_DataSendONEWAYU_021a72ec,0x232);
  local_20 = param_3;
  FUN_02051890(s_JUpiJUdMJUpsJU1wJUReJUPn_021a36f0 + 0xc,iVar1,4);
  FUN_02051890(&local_20,iVar1 + 4,4);
  FUN_02051890(param_1,iVar1 + 8,param_2);
  uVar2 = FUN_0217668c();
  FUN_0217ecec(param_4 & uVar2,iVar1,param_2 + 8U);
  FUN_0201b268(iVar1);
  return;
}

