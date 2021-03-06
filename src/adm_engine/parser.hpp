#pragma once

#include <adm/parse.hpp>
#include <adm/write.hpp>

#include <bw64/bw64.hpp>

namespace admengine {

  std::shared_ptr<adm::Document> getAdmDocument(const std::shared_ptr<bw64::AxmlChunk>& axmlChunk);
  std::shared_ptr<bw64::AxmlChunk> parseAdmXmlChunk(const std::unique_ptr<bw64::Bw64Reader>& bw64File);
  std::shared_ptr<bw64::ChnaChunk> parseAdmChnaChunk(const std::unique_ptr<bw64::Bw64Reader>& bw64File);

  std::string getAdmDocumentAsString(const std::shared_ptr<adm::Document>& admDocument);

  void displayAdmDocument(const std::shared_ptr<adm::Document>& admDocument);
  void displayChnaChunk(const std::shared_ptr<bw64::ChnaChunk>& chnaChunk);
  void displayBw64FileInfos(const std::unique_ptr<bw64::Bw64Reader>& bw64File);

  void parseAudioProgramme(const std::shared_ptr<adm::AudioProgramme>& audioProgramme);
  void parseAudioContent(const std::shared_ptr<adm::AudioContent>& audioContent);
  void parseAudioObject(const std::shared_ptr<adm::AudioObject>& audioObject);
  void parseAudioTrackUid(const std::shared_ptr<adm::AudioTrackUid>& audioTrackUid);
  void parseAudioPackFormat(const std::shared_ptr<adm::AudioPackFormat>& audioPackFormat);
  void parseAudioTrackFormat(const std::shared_ptr<adm::AudioTrackFormat>& audioTrackFormat);

  void displayAudioProgramme(const std::shared_ptr<adm::AudioProgramme>& audioProgramme);
  void displayAudioContent(const std::shared_ptr<adm::AudioContent>& audioContent);
  void displayAudioObject(const std::shared_ptr<adm::AudioObject>& audioObject);
  void displayAudioTrackUid(const std::shared_ptr<adm::AudioTrackUid>& audioTrackUid);
  void displayAudioPackFormat(const std::shared_ptr<adm::AudioPackFormat>& audioPackFormat);
  void displayAudioTrackFormat(const std::shared_ptr<adm::AudioTrackFormat>& audioTrackFormat);


  std::vector<std::shared_ptr<adm::AudioObject>> getAudioObjects(const std::shared_ptr<adm::AudioProgramme>& audioProgramme);
  std::vector<std::shared_ptr<adm::AudioObject>> getAudioObjects(const std::shared_ptr<adm::AudioContent>& audioContent);
  std::vector<std::shared_ptr<adm::AudioContent>> getAudioContents(const std::shared_ptr<adm::AudioProgramme>& audioProgramme);
  std::vector<std::shared_ptr<adm::AudioTrackUid>> getAudioTrackUids(const std::shared_ptr<adm::AudioObject>& audioObject);
  std::vector<std::shared_ptr<adm::AudioPackFormat>> getAudioPackFormats(const std::shared_ptr<adm::AudioObject>& audioObject);

}
